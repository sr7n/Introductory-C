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

int anotherFunction(int a, int b) {
  int answer = 42;
  int x = 0;
  printf("In anotherFunction(%d,%d)\n",a,b);
  while (b > a) {
    printf("a is %d, b is %d\n", a, b);
    answer = answer + (b - a);
    b -= x;
    a += x / 2;
    x++;
  }
  return answer;
}

int someFunction(int x, int y) {
  int a = x + y;
  if (x < y) {
    for (int i = 0; i < x; i++) {
      printf("In the loop with i = %d, a = %d\n", i, a);
      a = a + x;
      }
  }
  else {
    y = anotherFunction(y,a+4);
  }
  return a * y;
}

enum Results {Fail = -1, Average, Good, Excellent, Outstanding};