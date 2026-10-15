//🔥 inheritance -->when properties and member function of base class are passed to the derived class.
// 👉🏻 it is very usefull for code reusability.

#include <iostream>
using namespace std;
class Person{
    public:
    int age;
    string name;

    Person(int age,string name){
        this->age=age;
        this->name=name;
    }

};

class student:public Person{
    public:
    int roll_no;

    void show(){
        cout<<"name "<<name<<"age "<<age <<"roll number "<<roll_no<<endl;

    }


};

// parent class constructor always called first then a child class in inheritance
// in destructor child class distroyed first then parent class.
 