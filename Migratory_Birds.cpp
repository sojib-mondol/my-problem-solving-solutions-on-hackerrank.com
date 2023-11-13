#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    int maxKey = 0;
    int maxValue = numeric_limits<int>::min();

    for (auto it : m)
    {
        if(it.second > maxValue){
            maxKey = it.first;
            maxValue = it.second;
        }
    }

    cout<<maxKey<<endl;
    return 0;
}