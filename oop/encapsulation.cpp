#include<iostream>
using namespace std;

class Bank{
    private:
    string name;
    int acc_no;
    int balance;

    public:
    Bank(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }
     void check_balance(){
      cout<<"balance: "<<balance<<endl;
    }
void deposit(int amount){
this->balance+=amount;
cout<<"deposit amount is: "<<amount<<endl;
}

void withdraw(int amount){
if(checkamount(amount)){
    this->balance-=amount;
    cout<<"withdrawal amount is: "<<amount<<endl;
}
else{
    cout<<"Insufficient balance"<<endl;
}
}

private:
bool checkamount(int amount){
    if(this->balance>=amount){
        return true;
    }
    else{
        return false;
    }
}

};

int main (){
    Bank b("John Doe",12345,10000);
    b.check_balance();
    // b.deposit(2000);
    b.withdraw(100);
    b.check_balance();
    return 0;
}