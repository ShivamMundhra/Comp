#include <stdio.h>
#include <limits.h>
int main()
{
  int t, n, m;
  int f[50], total[51], type[51];
  scanf("%d", &t);
  //   printf("%d\n",t);
  while (t > 0)
  {
    t--;
    // printf("%d->",t);
    scanf("%d %d", &n, &m);
    int min = INT_MAX;
    for (int i = 1; i <= m; i++)
    {
      total[i] = 0;
      type[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
      scanf("%d", &f[i]);
      type[f[i]] = 1;
    }
    int temp;
    for (int i = 1; i <= n; i++)
    {
      scanf("%d", &temp);
      total[f[i]] += temp;
    }
    for (int i = 1; i <= m; i++)
    {
      if (type[i] != 0 && total[i] < min)
      {
        min = total[i];
      }
    }
    printf("%d\n", min);
  }
}