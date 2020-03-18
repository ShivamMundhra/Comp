#include <stdio.h>
int main()
{
  int t[5], sum = 0, n = 0, temp;
  int a[101] = {0};
  int b[101];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &t[i]);
    a[t[i]]++;
    sum += t[i];
    if (a[t[i]] >= 2 && a[t[i]] <= 3)
      temp = a[t[i]];
    else if (a[t[i]] > 3)
      temp = 3;
    else
      continue;
    if (temp * t[i] > n)
      n = temp * t[i];
    // printf("%d", n);
  }
  sum -= n;
  printf("%d", sum);
}