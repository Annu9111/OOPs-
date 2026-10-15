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