// 1. print day of week name 
// 2. print number of days in a month

#include <iostream>
using namespace std;
int main()
{
    // int week;
    // cout<<"enter week number:"<<endl;
    // cin>>week;

    // if(week == 1)
    // {
    //     printf("Monday");
    // }
    // else if(week == 2)
    // {
    //     printf("Tuesday");
    // }
    // else if(week == 3)
    // {
    //     printf("Wednesday");
    // }
    // else if(week == 4)
    // {
    //     printf("Thursday");
    // }
    // else if(week == 5)
    // {
    //     printf("Friday");
    // }
    // else if(week == 6)
    // {
    //     printf("Saturday");
    // }
    // else if(week == 7)
    // {
    //     printf("Sunday");
    // }
    // else
    // {
    //     printf("Invalid Input! Please enter week number between 1-7.");
    // }

    int month;
    cout << "enter month number:" << endl;
    cin >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        cout << "31 days";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        cout << "30 days";
    }
    else if (month == 2)
    {
        cout << "28/29 days";
    }
    else
    {
        cout << "invalid month number";
    }
    return 0;
}