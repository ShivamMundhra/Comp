#include <stdio.h>
#include <limits.h>
int main()
{
    long long int min = INT_MAX;
    long long int max = INT_MIN;
    int n, maxCount = -1, minCount = -1;
    long long int a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        if (a > max)
        {
            maxCount++;
            max = a;
        }
        if (a < min)
        {
            minCount++;
            min = a;
        }
    }
    printf("%d %d", maxCount, minCount);
    return 0;
}