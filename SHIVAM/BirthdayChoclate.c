#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int d, m, count = 0, sum = 0;
    scanf("%d%d", &d, &m);
    for (int i = 0; i < n - m; i++)
    {
        for (int j = i; j < i + m; j++)
        {
            sum += a[j];
        }
        if (sum == d)
            count++;
        sum = 0;
    }
    printf("%d", count);
}