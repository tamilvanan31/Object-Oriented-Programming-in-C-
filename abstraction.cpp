#include <iostream>
#include <math.h>

/*
Abstraction means displaying essential information and 
hiding details. Data abstraction refers to providing 
only essential information about the data to the outside world, 
hiding the background details of implementation.

example: when a man drives car, he only knows when he press the 
accelarator the car moves and when he apply brakes, the car stops without 
knowing the actual inner mechanism of working of cars, or how 
the brakes or accelerators work.

In c++, abstraction is achieved in two ways
1. using classes
2. using header files

1. in c++, abstraction can be acheived using classes. classes can help group 
the data and functions using the available access specifiers
2. another way of abstraction is using header files in c++. for example
using pow() from math.h header file the power of numbers are calculated 
without knowing the actual algorithm used for calculating the power of the numbers.

*/

class Abs {
private:
        int a, b;
public:
    void set() {
        int x, y;
        std::cout << "\nEnter a and b: ";
        std::cin >> x >> y;
        a = pow(x, y), b = pow(y, x);
    }
    void get() {
        std::cout << a << ' ' << b;
    }
};