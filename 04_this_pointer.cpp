//✅ this pointer in c++ constructor
// 👉🏻 this pointer is a pointer that points to the current object of a class.

#include <iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    
    Teacher(string name, string dept){
        this->name = name;
        this->dept=dept;
    }

    void display(){
        cout<<"name "<<name<<endl;
        cout<<"department "<<dept<<endl;
    }

};

int main(){
    Teacher obj("tonny","computer");
    obj.name;
    obj.display();

    return 0;
}
