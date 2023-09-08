//
// Created by Jesper Vallett on 2023-09-08.
//

#ifndef CPP_VALID_BOOMERANG_H
#define CPP_VALID_BOOMERANG_H


#include <vector>

class valid_boomerang {
public:
    bool isBoomerang(std::vector<std::vector<int>>& points) {
        auto area = points[0][0] * (points[1][1] - points[2][1])
                    + points[1][0] * (points[2][1] - points[0][1]) +
                points[2][0] * (points[0][1] - points[1][1]);

        return area != 0;
    }
};

#endif //CPP_VALID_BOOMERANG_H
