#include <iostream>
#include "encapsulation.cpp"
#include "polymorphism.cpp"
#include "abstraction.cpp"
#include "inheritance.cpp"

int main() {
    std::cout << "Encalsulation: ";
    Rectangle r(3.2, 2.3);
    float ans = r.area();
    std::cout << ans;
    
    std::cout << "\nPolymorphism: ";
    sum a;
    ++a;
    //what function call should be invoked is decided during compile time.
    std::cout << a.sumNum(2, 3) << ' ' << a.sumNum(5, 1, 3) << '\n';
    a.print();
    
    parent p;
    child c;
    std::list<parent*> vtr;
    vtr.push_back(&p), vtr.push_back(&c);
    for(parent* ptr: vtr) 
        //what function call should be invoked is decided during runtime.
        ptr->call();
    
    std::cout << "\nAbstraction: ";
    Abs ab;
    ab.set();
    ab.get();
    
    std::cout << "\nInheritance: ";
    derived b1;
    b1.p = 2, b1.b = 3;
    
    std::cout << b1.p << ' ' << b1.b;
}