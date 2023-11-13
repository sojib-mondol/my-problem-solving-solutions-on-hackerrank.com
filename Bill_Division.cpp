#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (x == i)
        {
            continue;
        }
        else
        {
            sum += arr[i];
        }
    }

    int dif = sum / 2;
    if (dif == k)
    {
        cout << "Bon Appetit\n";
    }
    else
    {
        cout << k - dif << endl;
    }
}