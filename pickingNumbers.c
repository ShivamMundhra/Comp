#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k, x, count = 0;
        scanf("%d%d", &n, &k);
        for (int j = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (x <= 0)
                count++;
        }
        if (count >= k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}