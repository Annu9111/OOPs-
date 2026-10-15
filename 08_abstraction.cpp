// ✅ abstraction -> hiding all unnecessary details and showing only the important parts.
// 👉🏻 it is implimented using access specifiers
// 👉🏻 it can also be implemented using abstract classes, abstract class cannot be instantiated meaning does not have an objects
// 👉🏻 anstract class are typically used to define interface for derived class.

#include <iostream>
using namespace std;

class Shape{           //abstract class
    public:
    virtual void show() = 0;
};

class circle : public Shape{
    public:
    void show(){
        cout<< "draw a circle";
    }
};

int main(){
    circle obj;
    obj.show();

    return 0;
};
