#include <iostream>
#include "pascals_triangle.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Solution solution = Solution();

    auto results = solution.generate(30);

    for (auto vectorResults : results) {
        for (auto numberResults : vectorResults) {
            std::cout << numberResults << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}