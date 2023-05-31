#include <bits/stdc++.h>
using namespace std;

namespace Srayo
{
    int example = 5;
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
};
using namespace Srayo;
int main()
{
    // Srayo::Student s1("Srayo Sikder", 21);
    // s1.show();
    Student s1("Srayo Sikder", 21);
    s1.show();

    return 0;
}