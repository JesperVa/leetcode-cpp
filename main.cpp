#include <iostream>
#include "pascals_triangle.h"

void test_pascals_triangle(bool is_printing);
void print_results(std::vector<std::vector<int>> int_vector_results);

int main() {
    test_pascals_triangle(false);

    return 0;
}

void test_pascals_triangle(bool is_printing) {
    std::cout << "Hello, World!" << std::endl;

    pascals_triangle solution = pascals_triangle();

    auto results = solution.generate(30);

    if (is_printing) {
        print_results(results);
    }
}

void print_results(std::vector<std::vector<int>> int_vector_results) {
    for (auto vectorResults: int_vector_results) {
        for (auto numberResults: vectorResults) {
            std::cout << numberResults << ' ';
        }
        std::cout << '\n';
    }
}
