// check whether a person is eligible for vote or not

#include<iostream>
using namespace std;
int main(){
int age , vage;
vage=18;
cout<<"enter your age"<<endl;
cin>>age;
if(age>=vage){
    cout<<"you are eligible for the vote";

}
else{
    cout<<"you are not eligible for the vote";
}

return 0;
}