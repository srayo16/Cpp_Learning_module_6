#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string nm, int a)
    {
        name = nm;
        age = a;
    }

    void show()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl;
    };
};

int main()
{
    Student s1("Srayo Sikder", 21);
    s1.show();

    return 0;
}