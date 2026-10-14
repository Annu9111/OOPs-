//✅ Destructor --> it get called automatically when an object is distroyed.
//👉🏻 it mainly used to release resources such as dynamically allocated memory,files and other resources held by an object

#include <iostream>
using namespace std;

class Teacher{
    public:
    string name;
    Teacher(string name){
        this->name=name;
        cout<< "this is a constructor" <<endl;
    }

    ~Teacher(){
        cout<< "this is a distructor" <<endl;
    }
    void show(){
        cout<<"name of the teacher is "<<name<<endl;
    }
};

int main(){
    Teacher t1("riya");
    t1.show();

}
