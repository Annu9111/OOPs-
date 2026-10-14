//✅classes --> classes are like a blue print to create an object.
//✅object -->these are a real world entities 
#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        double salary;

    public:
    //👉🏻properties/attributes
        string tname;
        string dept;
        string subject;

    //👉🏻methods /member functions
    void changedept (string newdept){
        dept=newdept;

    }
    //👉🏻setter
    void setSalary(double newsalary){
        salary = newsalary;
    }
    //👉🏻getter
    double getSalary(){
        return salary;
    }

};

//👉🏻objects
int main(){
    Teacher t1;
    t1.tname = "radha";
    t1.dept ="computer science";
    t1.subject="c++";
    t1.changedept("eeee");
    cout<<t1.dept<<endl;

    return 0;
}