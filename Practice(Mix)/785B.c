#include <stdio.h>
#include <limits.h>
int main()
{
  int n, m;
  scanf("%d", &n);
  int a[n][2];
  int a0Max = INT_MIN, a1Min = INT_MAX, b0Max = INT_MIN, b1Min = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &a[i][0], &a[i][1]);
    if (a[i][0] > a0Max)
    {
      a0Max = a[i][0];
    }
    if (a[i][1] < a1Min)
    {
      a1Min = a[i][1];
    }
  }
  scanf("%d", &m);
  int b[m][2];
  for (int i = 0; i < m; i++)
  {
    scanf("%d %d", &b[i][0], &b[i][1]);
    if (b[i][0] > b0Max)
    {
      b0Max = b[i][0];
    }
    if (b[i][1] < b1Min)
    {
      b1Min = b[i][1];
    }
  }
  int c1 = b0Max - a1Min;
  int c2 = a0Max - b1Min;
  if (c1 < 0 && c2 < 0)
    printf("0");
  else if (c1 > c2)
    printf("%d", c1);
  else
    printf("%d", c2);
}