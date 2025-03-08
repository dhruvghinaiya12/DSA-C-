#include <iostream>
using namespace std;

class Sum
{
public:
    int a;
    int b;
    Sum(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int sum()
    {
        
        return a + b;
    }
};

class Sub : public Sum
{
public:
    int a;
    int b;
    Sub(int a, int b) : Sum(a, b)
    {
        this->a = a;
        this->b = b;
    }

    int sub()
    {
        return a - b;
    }
};

int main()
{

    Sub s(5, 3);
    cout << "Sub: " << s.sub() << endl;
    cout << "Sum: " << s.sum() << endl;
    return 0;
}