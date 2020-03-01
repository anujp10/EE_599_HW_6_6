#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector <int> input = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    std::vector <int> result = solution.Rearrangevector(input, 9);
    for (auto &n : result) {
        std::cout << n << " ";
    }

    std::cout << std::endl;

    return EXIT_SUCCESS;
}