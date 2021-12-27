#include <iostream>

class Rectangle {
    public:
        float len, brth;
        Rectangle(float len, float brth) {
            this->len = len;
            this->brth = brth;
        }
        float area() {
            return len * brth;
        }
};
/*
Encapsulation in defined as binding together the data and the 
function that manipulates them. 
Both Abstraction & Encapsulation works hand in hand because 
Abstraction says what details to be made visible and Encapsulation 
provides the level of access right to that visible details. 
i.e. – It implements the desired level of abstraction.
*/