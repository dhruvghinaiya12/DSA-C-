#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // int n = 3,i,j;
    // int num=1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


// for(i=1;i<=n;i++){
//     for(j=1;j<=i;j++){
// cout<<num;
// num++;
//     }
//     cout<<endl;
// }

vector<int> arr={1,2,3,4,5,6};
for (int i = 0; i < arr.size()-1; i++)
{
    int temp;
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

}
for(int num:arr){
    cout<<num<<" ";
 
}
cout<<arr[1]<<endl;



    return 0;
}