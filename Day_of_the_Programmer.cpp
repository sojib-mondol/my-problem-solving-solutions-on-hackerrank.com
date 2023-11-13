#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if (n > 1918)
    {
        if (n % 4 == 0 && n % 100 != 0)
        {
            cout << "12.09." << n << endl;
        }
        else if (n % 400 == 0)
        {
            cout << "12.09." << n << endl;
        }
        else
        {
            cout << "13.09." << n << endl;
        }
    }
    else if (n < 1918)
    {
        if (n % 4 == 0)
        {
            cout << "12.09." << n << endl;
        }
        else
        {
            cout << "13.09." << n << endl;
        }
    }
    else
    {
        cout << "26.09." << n << endl;
    }

    return 0;
}