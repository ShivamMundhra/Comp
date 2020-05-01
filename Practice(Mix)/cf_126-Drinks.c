// https://codeforces.com/problemset/problem/200/B

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    c += a[i];
  }
  float f = c / (float)n;
  printf("%f", f);
  return 0;
}