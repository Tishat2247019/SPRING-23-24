#include <bits/stdc++.h>
using namespace std;

int main()
{


    cout << "Please choose an operation: " << endl;
    cout << "1. | operation (enter '|')" << endl;
    cout << "2. . operation (enter '.' )  " << endl;
    cout << "3. * operation (enter '*')" << endl;
    char check;
    cin >> check;

    // for or  |
    string a;

    // for .
    string c;

    // for enclouser *
    string en;
    char en2;

    cout << "Now enter the regular expression: ";


    if (check == '|')
    {
        cin >> a;
    }

    if (check == '.')
    {
        cin >> c;
    }

    if (check == '*')
    {
        cin >> en >> en2;
    }

    cout << "The output is : ";

    switch (check)
    {

    case '|':
        cout << "{";
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '|')
            {
                cout << " , ";
                continue;
            }
            cout << a[i];
        }
        cout << "}";

        break;

    case '.':
        cout << "{ ";
        for (int i = 0; i < c.length(); i++)
        {
            if (c[i] == '.')
            {
                continue;
            }
            cout << c[i];

        }
        cout << " }";
        break;

    case '*':

        cout << "{";
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << en;
            }
            //cout << endl;
            if ( i < 5-1){
                cout << " , ";
            }
        }
         cout << "}";
    }

    return 0;
}
