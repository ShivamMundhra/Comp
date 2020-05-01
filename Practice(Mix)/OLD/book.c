#include <stdio.h>
int main()
{
    long int n, p;
    scanf("%ld %ld", &n, &p);
    float t = (n - p) / 2;
    printf("%f", t);
    if (p == n || p == n - 1 || p == 1)
    {
        printf("0");
        return 0;
    }
    if (n - p >= p - 1)
    {
        printf("%ld", ((p - 1) / 2) + 1);
    }
    else
        printf("%ld", ((n - p) / 2) + 1);
    return 0;
}