// Convert the First Letter of Each Word to Uppercase or Lowercase Based on Its Current Case in a String

#include <iostream>
#include <string>

using namespace std;

void ConvertString(string str, string ans)
{
    for (int i = 0; i < str.length(); i++)
    {
        string word = "";
        while (i < str.length() && str[i] != ' ')
        {
            word += str[i];
            i++;
        }

        if(islower(word[0])){
            word[0] = toupper(word[0]);
        }
        else if(isupper(word[0])){
            word[0] = tolower(word[0]);
        }
        
        ans += " " + word ; 

    }
    cout << ans.substr(1) << endl;
}

int main()
{
    string str, ans = "";
    getline(cin, str);
    ConvertString(str, ans);

    return 0;
}