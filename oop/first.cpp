#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    int number;
    string name;
    string course;

    Student(int id, int number, string name, string course)
    {
        this->id = id;
        this->name = name;
        this->number = number;
        this->course = course;
    }

    void print()
    {
        cout << "id:" << " " << this->id << endl;
        cout << "number:" << " " << this->number << endl;
        cout << "name:" << " " << this->name << endl;
        cout << "course:" << " " << this->course << endl;
    }

    ~Student()
    {
        cout << "destructor called" << endl;
    }
};

int main()
{
    Student s1(1, 123, "dhruv", "abv");
    Student *s2 = new Student(2, 124, "test", "abc");
    s1.print();
    s2->print();
    delete s2;
    return 0;
}