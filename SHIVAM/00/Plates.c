#include <stdio.h>
int main()
{
  int n, m, k, q1 = 0, q2 = 0;
  scanf("%d %d %d", &n, &m, &k);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] == 1)
      q1++;
    else
      q2++;
  }
  int b = q1 - m;
  int p = q2 - k;
  if (b < 0)
  {
    p = p + b;
    b = 0;
  }
  if (p < 0)
    p = 0;
  printf("%d\n", p + b);
}