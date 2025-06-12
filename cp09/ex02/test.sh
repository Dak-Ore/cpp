#!/bin/bash

EXEC=./PmergeMe

# Check if the executable exists
if [ ! -x "$EXEC" ]; then
    echo "Error: The executable $EXEC does not exist or is not executable."
    exit 1
fi

# Function to trim leading and trailing spaces
function trim() {
    echo "$1" | sed 's/^[[:space:]]*//;s/[[:space:]]*$//'
}

# Function to test sorting
function make_sort() {
    number_of_values=$1
    max_value=$2

    # Generate a sequence of random valid positive numbers between 1 and max_value
    input=$(shuf -i 1-"$max_value" -n "$number_of_values" | tr '\n' ' ')

    # Trim trailing space
    input=$(trim "$input")

    echo "Input: $input"
    
    # Run the PmergeMe program
    output=$($EXEC $input)

    # Extract the 'After:' line that contains the sorted result
    after_line=$(echo "$output" | grep '^After:' | sed 's/After: //')

    # Sort the input with Unix sort as a reference
    sorted_ref=$(echo $input | tr ' ' '\n' | sort -n | tr '\n' ' ')

    # Trim leading and trailing spaces before comparing
    after_trimmed=$(trim "$after_line")
    ref_trimmed=$(trim "$sorted_ref")

    echo "Program sorted: $after_trimmed"
    echo "Reference sort: $ref_trimmed"

    # Compare the results
    if [ "$after_trimmed" == "$ref_trimmed" ]; then
        echo "Result: ✅ SUCCESS"
    else
        echo "Result: ❌ FAILURE"
    fi

    # Display the processing time
    echo "$output" | grep -E "Time to process"
    echo "-------------------------"
}

function test_sort() {
    input="$1"
    echo "Input: $input"
    # Run your program
    output=$($EXEC $input)

    # Extract the 'After' line
    after_line=$(echo "$output" | grep '^After:' | sed 's/After: //')

    # Sort input with Unix sort for comparison
    sorted_ref=$(echo $input | tr ' ' '\n' | sort -n | tr '\n' ' ')

    # Trim trailing spaces before comparing
    after_trimmed=$(trim "$after_line")
    ref_trimmed=$(trim "$sorted_ref")

    echo "Program sorted: $after_trimmed"
    echo "Reference sort: $ref_trimmed"

    if [ "$after_trimmed" == "$ref_trimmed" ]; then
        echo "Result: ✅ SUCCESS"
    else
        echo "Result: ❌ FAILURE"
    fi
    echo "$output" | grep -E "Time to process"
    echo "-------------------------"
}

# Check if the correct number of parameters is provided
if [ "$#" -lt 1 ] || [ "$#" -gt 2 ]; then
    # Test cases
    test_sort "37387 1183 90522 42200 54473 71733 65343 77178 46574 57882"
    test_sort "5 3 9 1 7"
    test_sort "42"
    test_sort "$(shuf -i 1-1000 -n 100 | tr '\n' ' ')"
    test_sort "1 2 3 4 5 6 7 8 9 10"
    test_sort "100 90 80 70 60 50 40 30 20 10"
    test_sort "5 5 5 5 5"
    test_sort "2147483647 1 100 500000"

    # Invalid input test (expected to fail or show error, won't check sort correctness)
    echo "Invalid input test:"
    $EXEC "1 2 a 3"
    echo "-------------------------"
    $EXEC "1 -2 3"
    echo "-------------------------"
    exit 1
fi

number_of_values=$1
max_value=${2:-10000}

# Check if the parameters are valid positive integers
if ! [[ "$number_of_values" =~ ^[0-9]+$ ]] || ! [[ "$max_value" =~ ^[0-9]+$ ]] || [ "$max_value" -lt 1 ]; then
    echo "Both parameters must be positive integers, and the maximum value must be at least 1."
    exit 1
fi

# Run the test with the provided parameters
make_sort "$number_of_values" "$max_value"
