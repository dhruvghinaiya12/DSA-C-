// find whether a given year is a leap year or not

#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year:"<<endl;
    cin>>year;
    if(year%4==0){
        cout<<"year is leap year";
    }
    else{
        cout<<"year is not leap year";
    }

    return 0;
}