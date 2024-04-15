#include <iostream>
#include <string>
#include "Header.h"
using namespace std;



int main() {
    setlocale(LC_ALL, "Russian");
    Time t1(29, 12, 2044);
    timeFunction(t1);
    Time t2(6, 6, 1999);
    timeFunction(t2);
    return 0;
}