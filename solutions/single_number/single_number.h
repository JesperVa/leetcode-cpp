//
// Created by Jesper Vallett on 2023-09-08.
//

#ifndef CPP_SINGLE_NUMBER_H
#define CPP_SINGLE_NUMBER_H

#include <vector>
#include <unordered_set>

class single_number {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_set existingNumbers = std::unordered_set<int>();
        std::unordered_set nonMatchingNumbers = std::unordered_set<int>();

        for (auto currentNumber : nums) {
            if (existingNumbers.contains(currentNumber)) {
                nonMatchingNumbers.erase(currentNumber);
            } else {
                existingNumbers.insert(currentNumber);
                nonMatchingNumbers.insert(currentNumber);
            }
        }

        return nonMatchingNumbers.begin().operator*();
    }


};

#endif //CPP_SINGLE_NUMBER_H
