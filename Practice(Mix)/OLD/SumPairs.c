#include <stdio.h>
int main()
{
    int n, k, count = 0;
    scanf("%d%d", &n, &k);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ar[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) % k == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}