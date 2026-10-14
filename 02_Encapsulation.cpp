//✅ Encapsulation -> it is a process of wrapping data and member function in a single class.

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
    double balance;

    public:
    int AccountId;
    string username;

    double getBalance(){
        return balance;
    }

    void Credit(double amount){
        balance+=amount;
    }

    void debit(double amount){
        balance-=amount;
    }

    void Show(){
        cout<<AccountId<<" "<<username<<"having amount " <<balance<<endl;
    }
};

int main(){
    BankAccount obj;
    obj.AccountId=101;
    obj.username="Tom";
    obj.Credit(10020);
    obj.debit(20);
    obj.Show();

    return 0;
}