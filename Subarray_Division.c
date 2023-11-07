#include <stdio.h>

int main()
{

    int n, sum = 0, p = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int d, m;
    scanf("%d %d", &d, &m);

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i + j];
        }
        if (sum == d)
        {
            p++;
        }
    }

    printf("%d", p);

    return 0;
}
