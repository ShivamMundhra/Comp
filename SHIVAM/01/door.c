#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  int m0 = -1;
  int m1 = -1;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] == 0 && i > m0)
      m0 = i;
    if (a[i] == 1 && i > m1)
      m1 = i;
  }
  if (m0 < m1)
    printf("%d", (m0 + 1));
  else
    printf("%d\n", (m1 + 1));
}