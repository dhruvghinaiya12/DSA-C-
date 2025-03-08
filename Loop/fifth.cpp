// find the greatest common divisor of the elements 

#include<iostream>
using namespace std;
int main(){

    int num1,num2,cdn;
    cin>>num1>>num2;
    for(int i=1;i<=num1&&i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            cdn=i;
        }
    }
    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<cdn<<endl;
    return 0;
}