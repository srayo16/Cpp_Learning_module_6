#include <bits/stdc++.h>
using namespace std;

void show(stringstream &a)
{
    string word;
    if (a >> word)
    {

        show(a);
        cout << word << endl;
    }
    else
        return;
}

int main()
{
    string s;
    getline(cin, s);

    stringstream a(s);

    show(a);
    // string word;

    // while (a >> word)
    // {
    //     cout << word << endl;
    // }

    return 0;
}