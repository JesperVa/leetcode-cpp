#include <iostream>
#include "solutions/pascals_triangle/pascals_triangle.h"
#include "solutions/single_number/single_number.h"

void test_pascals_triangle(bool is_printing);
void test_single_number(bool is_printing);
void print_results(std::vector<std::vector<int>> int_vector_results);
void print_results(int result) {std::cout << result;}

int main() {
    test_pascals_triangle(false);
    test_single_number(true);

    return 0;
}

void test_single_number(bool is_printing) {
        single_number solution = single_number();
        std::vector<int> data = {1, 2, 1, 2, 4};

        auto results = solution.singleNumber(data);

        if (is_printing) {
            print_results(results);
        }
}

void test_pascals_triangle(bool is_printing) {
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
