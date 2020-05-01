#include <stdio.h>
#include <limits.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == INT_MIN)
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = INT_MIN;
                break;
            }
        }
    }
    printf("%d", count);
}