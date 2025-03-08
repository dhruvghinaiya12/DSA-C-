// two sum

#include <iostream>
#include <vector>

using namespace std;

vector<int> twosum(vector<int> arr, int t)
{
    int result[] = {-1, -1};
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == t)
            {
            return {i,j};
            }
        }
    }
    return{-1,-1};
   
}

int main()
{
    vector<int> arr = {10, 20, 30, 45, 64, 34};
    int t = 555;
    vector <int>r=twosum(arr,t);
    cout<<r[0]<<","<<r[1];

    return 0;
}