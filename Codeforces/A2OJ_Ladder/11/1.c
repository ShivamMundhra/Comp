#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  int x[t], y[t], z[t];
  int xt = 0, yt = 0, zt = 0;
  for (int i = 0; i < t; i++)
  {
    scanf("%d %d %d", &x[i], &y[i], &z[i]);
    xt += x[i];
    yt += y[i];
    zt += z[i];
  }
  if (xt != 0 || yt != 0 || zt != 0)
    printf("NO");
  else
    printf("YES");
}