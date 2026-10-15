// ✅ Polymorphism -> it is an ability of an object to take different forms or behave in different way depending on the context in which they are used.

// 👉🏻 compile time polymorphism 
// 👉🏻 run time polymorphism 

#include <iostream>
using namespace std;
class Student {
    public:
    string name;
    Student(){
        cout<<"non parameterised constructor";
    }

    Student(string name){
        this->name=name;
        cout<<"parameterized constructor";
    }
};

int main(){
    Student s1;
    Student s2("Annu");

    return 0;
}

// 1️⃣ compile time polymorphism
// 👉🏻 function overloading 

class Print{
    public:
    void show(int a){
        cout<<a;
    }
    void show(char ch){
        cout<<ch;
    }
};

// 2️⃣ run time polymorphism
// 👉🏻 function overriding->Parent and child both contain the same function with different implimentation, the parent class function is said to be overridden.

class Parent{
    public:
    void show(){
        cout<<"this is a parent class";
    }
};

class child:public Parent{
    public:
    void show(){
        cout<<"this is a child class";
    }
};

// 🔥 virtual function 
// 1️⃣ these are dynammic in nature 
// 2️⃣ define by the keyword virtual inside a base class and are always declared with a base class and overriden in child class
// 3️⃣ Avirtual function is called during run time

class Base{
    public:
    virtual void hello(){
        cout<<"this is virtual function";
    }
};
class derived : public Base{
    public:
    void hello(){
        cout<<"virtual function overriden by derived class ";
    }
};