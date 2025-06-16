#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <sstream>
# include <cstdlib>
# include <ctime>
# include <climits>
# include <algorithm>
# include <iterator>

class PmergeMe {
    
    public:

        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();

        static void sortVector(std::vector<int>& vec);
        static void sortDeque(std::deque<int>& deq); 
};

#endif