#include<iostream>
using namespace std;
int main(){
    int i,oddsum=0,evensum=0;
    for(i=1;i<=20;i++){
        if(i%2!=0){
            oddsum+=i;
        }
        else{
            evensum+=i;
        }
    }
    cout<<"Sum of odd numbers: "<<oddsum<<endl;
    cout<<"Sum of even numbers: "<<evensum<<endl;

    if(evensum>oddsum){
        cout<<"Sum of even numbers is greater than sum of odd numbers";
    }
    else{
        cout<<"Sum of odd numbers is greater than sum of even numbers";
    }
        return 0;
}