#include<iostream>
using namespace std;
int main(){
    int i,j,num=1,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}