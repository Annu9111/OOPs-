//✅Constructor -> is a special member function that get called automatically when an object is created.

// 🔥 in c++ we use following rules:
//👉🏻 same name as class name
//👉🏻 constructor does not have a return type
//👉🏻 memory allocation happens when constructor is called 
//👉🏻 only called ones automatically ,at object creation
//👉🏻 it is used to initialize an object
//👉🏻 it can be overloaded ,meaning a class can have multiple constructor with different parameter list

//🔥 Three type of constructor 
// 1️⃣ default constructor
// 2️⃣ parameterized constructor
// 3️⃣ copy constructor

//👍🏻 example

#include <iostream>
using namespace std;

class Student{
    public:
    int age;

    //1️⃣ default constructor
    Student(){
        age =18;
    }

    //2️⃣ parameterized constructor
    Student(int a){
        age = a;
    }

    // 3️⃣ copy constructor
    Student(const Student &s){
        age = s.age;
    }

    void display(){
        cout << "Age" << age <<endl;
    }
};

int main(){
    Student s1;  //default constructor
    Student s2(20);  // paramertised constructor
    Student s3(s1); //copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;

}

// 🔥 constructor overloading -->it is also an example of polymorphism

class Demo{
    Demo(){
        cout << "default constructor";
    }

    Demo(int a){
        cout << a <<"paramertised constructor" <<endl;
    }
};


