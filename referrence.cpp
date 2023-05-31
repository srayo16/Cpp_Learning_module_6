#include <bits/stdc++.h>
using namespace std;

void show(string &a) // ekhane'&' sign deyar karon holo amra ekhane directly string pathale main function er string change hoto na.
// amra main function theke string 's' er refference pathaisi ar function a '&' sign diye recieve korechi.
// normal khetre amra main function theke adress pathai ar function a pointer diye oi adress recieve kori. but string jehetu ekta class tai
// class tai class er khetre amra pointer use korte parbo na.

{
    a = "Where is she?";
}

int main()
{
    string s = "Srayo";
    show(s);
    cout << s;

    return 0;
}