#include <iostream>

/*
inheritance is the capacity of a class to derive properties
and characteristics from other classes.
example: consider a group of vehicle, you need to create 
classes for bus, truck and car. fuelamount, applybrakes, capacity
will be same for all classes. if you create it without inheritance
you need to repeat all the functions for all the classes. so,
there is repetation of code which leads to redundancy. to avoid this 
inheritance is used.
*/

class base {
public:
    int p;
};

class derived: public base {
public:
    int b;
};
