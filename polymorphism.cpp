#include <iostream>
#include <list>

/*
In simple words, Polymorphism can be defined as the ability of 
using the same name for doing different things.
example:
a person can act as a father, employee, son, etc...
there are two types of polymorphism
1. compiletime 
2. runtime

compiletime:
this polymorphism can be achieved using function overloading 
and operator overloading.

function overloading:
when multiple functions having same name and different parameters
then the functions are said to overloaded. for functions to overload, they
should differ in number of parameters and type of parameters.

operator overloading:
c++ also provide operators to overload. 
in the below example (++) increment operator is used to add 1 to the current 
value. but, here we overload by adding 2.

runtime:
this type of polymorphism can be achieved using function overriding.

function overriding:
function overriding occur when a derived class function has definition 
of one of the functions of base class. that base class function is
said to be overriden.
*/

//compile polymorphism(static or early binding) 
/*
in static binding, the code to be executed during the
function call is decided at the compiletime.
*/
class sum
{
public:
  int a;
    sum ():a (3){}
  int sumNum (int x, int y)
  {
    return x + y;
  }
  double sumNum (int x, int y, int z)
  {
    return (double) x + y + z;
  }
  void operator ++ () {
    //this overloads pre increment operator, 
    //if we pass 'int' inside paranthesis, it overloads
    //post increment operator
    a = a + 2;
  }
  void print ()
  {
    std::cout << "a: " << a << '\n';
  }
};

//runtime polymorphism(dynamic or late binding)
/*
in dynamic binding, the code to be executed during the
function call is decided at the runtime.
*/
class parent
{
public:
  virtual void call ()
  {
    std::cout << "call from parent class\n";
  }
};

class child:public parent
{
  void call ()
  {
    std::cout << "call from child class\n";
  }
};

// overriding functions should contain same number of parameters and same return datatype
/*
the argument list of overriding method (method of child class) must 
match the Overridden method(the method of parent class). 
The data types of the arguments and their sequence should exactly match
*/
