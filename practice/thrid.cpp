#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "my name is dhruv";
    string ans = "";
    string result = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            result = result + ans + ' ';
            ans = "";
        }
        else
        {
            // ans+=str[i];
            // cout <<"word"<<" " << ans << endl;
            ans = str[i]+ans;
            cout <<"hole word"<< " "<< ans << endl;   

        }
    }

    result += ans;
    cout << result;
    return 0;
}