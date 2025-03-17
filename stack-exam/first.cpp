#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool check(stack<char> s, string str)
{
    if (str.length() % 2 != 0)
    {
        return false;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (c == '(' || c == '[' || c == '{')
        {
            s.push(c);
        }
        else if (!s.empty())
        {
            char t = s.top();
            if (t == '(' && c == ')' || t == '[' && c == ']' || t == '{' && c == '}')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    stack<char> s;
    string str;

    cin >> str;

    bool result = check(s, str);

    if (result)
    {
        cout << "valid parentheses";
    }
    else
    {
        cout << "Invalid parentheses";
    }

    return 0;
}