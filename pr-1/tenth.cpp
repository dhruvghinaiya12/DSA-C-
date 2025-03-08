// percentage of 5 subject

#include <iostream>
using namespace std;
int main()
{
    float phy, chem, maths, bio, comp,per;

    cout << "enter marks of physics:" << endl;
    cin >> phy;

    cout << "enter marks of chemistry:" << endl;
    cin >> chem;

    cout << "enter marks of maths:" << endl;
    cin >> maths;

    cout << "enter marks of biology:" << endl;
    cin >> bio;

    cout << "enter marks of computer:" << endl;
    cin >> comp;

    per=(phy+chem+maths+bio+comp)*100/500;

    cout << "percentage is:" << per << endl;

if(per>=90){
    cout<<"grade: A";
}
else if (per>=80){
    cout<<"grade: B";
}

else if (per>=70){
    cout<<"grade: C";
}

else if (per>=60){
    cout<<"grade: D";
}
else if(per>=40){
    cout<<"grade: E";
}
else{
    cout<<"grade: F";
}
    return 0;
}