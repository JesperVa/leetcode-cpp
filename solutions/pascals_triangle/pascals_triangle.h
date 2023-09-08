//
// Created by Jesper on 2023-09-08.
//

#ifndef CPP_PASCALS_TRIANGLE_H
#define CPP_PASCALS_TRIANGLE_H

#include <vector>

class pascals_triangle {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector results = std::vector<std::vector<int>>();
        std::vector firstRow = std::vector<int>(1, 1);
        std::vector previousRow = firstRow;
        results.push_back(firstRow);

        for (int i = 1; i < numRows; i++) {
            std::vector newRow = std::vector<int>();
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    newRow.push_back(1);
                    continue;
                }

                newRow.push_back(previousRow.at(j) + previousRow.at(j-1));
            }
            results.push_back(newRow);
            previousRow = newRow;
        }
        return results;
    }
};


#endif //CPP_PASCALS_TRIANGLE_H
