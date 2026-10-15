// ✅ Static keyword ->variable declared static in function are created and initialised once for the life time of the program.
// 👉🏻 static variable in class are created and initialized once . they are shared by all the object of the class

#include <iostream>
using namespace std;

class A{
    public:
    int x;
    void inc(){
        x=x+1;
    }

};

int main(){
    A obj;
    cout<< obj.x <<endl;
    obj.inc();
    cout<< obj.x <<endl;

    return 0;
}