#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        // (*this).name = name;
        // (*this).age = age;
        this->name = name;
        this->age = age;
    }

    void show()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl;
    };
};

int main()
{
    Student *s1 = new Student("Srayo Sikder", 21);
    // s1->show();
    Student *s2 = new Student("Mariam", 20);
    // s2->show();

    *s1 = *s2;
    delete s2;
    s1->show();

    return 0;
}