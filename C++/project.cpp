#include <iostream>
using namespace std;

int main()
{ // BASIC PAATERN TRIANGLE---->>
    /*int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;*/
    // ABCD PRINT ---->>>>>>>
    /*int n = 4;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;*/
    // NUMBER PRINT PORJOAYKROMIK--->>>>>
    /*
    int n = 3;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
    */
    //--TRIANGLE MADE BY ***  --->>>
    /*int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }*/

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << (i + 1);
        }
        cout << endl;
    }
}