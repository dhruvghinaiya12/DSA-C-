//  Check Whether a character is Vowel or Consonant

#include <iostream>

using namespace std;
int main()
{
  char c;
  cout << "enter any character:" << endl;
  cin >> c;
  if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
  {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
      cout << "character is vowel";
    }
    else
    {
      cout << "character is consonant";
    }
  }
  else
  {
    cout << "character is not alphabet";
  }

  return 0;
}