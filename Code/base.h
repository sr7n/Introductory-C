#include <iostream>
#include <stdlib.h>
#include <climits>

#include <cmath>

using namespace std;

class Point {
public:
    int x, y;
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

void clear() {
    system("cls");
}

int random[10] = {45, 64, 24, 6, 4, 35, 76, 87, 66, 0};
Point randoms[5] = {{45, 64}, {24, 13}, {44, 35}, {76, 87}, {66, 78}};