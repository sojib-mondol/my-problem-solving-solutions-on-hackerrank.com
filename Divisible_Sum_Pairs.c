#include <stdio.h>

int main()
{
    int n, k, p = 0;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) % k == 0)
            {
                p++;
            }
        }
    }

    printf("%d\n", p);

    return 0;
}