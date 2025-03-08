#include <iostream>

using namespace std;

bool checkprime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}

int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (checkprime(i))
        {
            cout << i << " "<<endl;
        }
    }

    return 0;
}