#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (char a : s)
    {
        cout << a << endl;
    }

    return 0;
}