// // remove occurrences from the string

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//   string str;
//   cout << "Enter a string: ";
  
//   getline(cin,str);

//   string part;
//     cout << "Enter the part to remove: ";
//     getline(cin, part);

// while(str.length() > 0&& str.find(part)<str.length()){
//     str.erase(str.find(part),part.length());
// }
// cout<<str;

//     return 0;
// }


#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int maxLength = 0;
    int start = 0;
    int charIndex[256];

    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int end = 0; end < str.length(); end++) {
        char currentChar = str[end];
        if (charIndex[currentChar] >= start) {
            start = charIndex[currentChar] + 1;
        }

        charIndex[currentChar] = end;

        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    cout << "Length of the longest substring without repeating characters: " << maxLength << endl;

    return 0;
}
