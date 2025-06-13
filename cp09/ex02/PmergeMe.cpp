#include "PmergeMe.hpp"

// Default constructor
PmergeMe::PmergeMe() {}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe& other)
{
	(void)other;
}

// Assignment operator
PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	(void)other;
	return (*this);
}

// Destructor
PmergeMe::~PmergeMe() {}

void insertionSort(std::vector<int>& vec, size_t start, size_t end)
{
    for (size_t i = start + 1; i < end; i++)
    {
        int key = vec[i];
        size_t j = i;
        while (j > start && vec[j - 1] > key)
        {
            vec[j] = vec[j - 1];
            j--;
        }
        vec[j] = key;
    }
}

void PmergeMe::sortVector(std::vector<int>& vec)
{
    size_t size = vec.size();
    if (size <= 1)
        return;
    for (size_t i = 0; i + 1 < size; i += 2)
    {
        if (vec[i] > vec[i + 1])
            std::swap(vec[i], vec[i + 1]);
    }
    
    std::vector<int> sortedList;
    for (size_t i = 0; i + 1 < size; i += 2)
        sortedList.push_back(vec[i + 1]);

    insertionSort(sortedList, 0, sortedList.size());

    for (size_t i = 0; i < size; i += 2)
    {
        int value = vec[i];
        std::vector<int>::iterator pos = std::upper_bound(sortedList.begin(), sortedList.end(), value);
        sortedList.insert(pos, value);
    }

    vec = sortedList;
}

void insertionSortDeque(std::deque<int>& deq, size_t start, size_t end)
{
    for (size_t i = start + 1; i < end; i++)
    {
        int key = deq[i];
        size_t j = i;
        while (j > start && deq[j - 1] > key)
        {
            deq[j] = deq[j - 1];
            j--;
        }
        deq[j] = key;
    }
}

void PmergeMe::sortDeque(std::deque<int>& deq)
{
    size_t size = deq.size();
    if (size <= 1) return;

    for (size_t i = 0; i + 1 < size; i += 2) {
        if (deq[i] > deq[i + 1])
            std::swap(deq[i], deq[i + 1]);
    }

    std::deque<int> sortedList;
    for (size_t i = 0; i + 1 < size; i += 2)
        sortedList.push_back(deq[i + 1]);


    insertionSortDeque(sortedList, 0, sortedList.size());

    for (size_t i = 0; i < size; i += 2) {
        int value = deq[i];
        std::deque<int>::iterator pos = std::upper_bound(sortedList.begin(), sortedList.end(), value);
        sortedList.insert(pos, value);
    }

    deq = sortedList;
}
