#include<bits/stdc++.h>
using namespace std;


int main()
{

    while (true)
    {
    string str;
    int c;
    cout << "\n1.EXIT the program" << endl;
    cout << "2.Check whether it is a number or not \n" << endl;

    cin >> c;
    if (c == 1)
    {
        break;
    }

    cout << "Please input to check it is a number or not" << endl;
    cin >> str;


    bool flag = true;
    int counterC = 0;

    for (int i = 0; i < str.length(); i++){
        if (!isdigit(str[i])){
            flag  = false;
            counterC++;
        }
    }

    if (flag)
    {
        cout << "Entered input is a number \n" << endl;
    }
    else if (counterC++ >= str.length())
    {
        cout << "Entered input is string  \n" << endl;
    }

    else
    {
        cout << "Entered input is mixed of numbers and characters" << endl;
    }


    }

    return 0;
}
