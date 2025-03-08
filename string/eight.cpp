// count prefix

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int PrefixCountInStirng(string str1, string str2, string str3)
{
    int count = 0;
  
    int str1Len = str1.length();
    int str2Len = str2.length();
    int str3Len = str3.length();

    int minlength;
    if (str1Len < str2Len && str1Len < str3Len)
    {
        minlength = str1Len;
    }
    else if (str2Len < str1Len && str2Len < str3Len)
    {
        minlength = str2Len;
    }
    else
    {
        minlength = str3Len;
    }

    for (int i = 0; i < minlength; i++)
    {
        if (str1[i] == str2[i] && str2[i]== str3[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{

    string str1, str2, str3;

    getline(cin, str1);

    getline(cin, str2);

    getline(cin, str3);

    int str1Len = str1.length();
    int str2Len = str2.length();
    int str3Len = str3.length();

    int result=PrefixCountInStirng(str1,str2,str3);
    cout<<result;

    return 0;
}
