#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int count = -1;
  // for (int i = 0; i < n; i++)
  // {
  //   if (i == 0)
  //   {
  //     count += a[i];
  //     count++;
  //     continue;
  //   }
  //   if (a[i] >= a[i - 1])
  //   {
  //     count++;
  //     count += (a[i] - a[i - 1]);
  //     count++;
  //   }
  //   else
  //   {
  //     count += (a[i - 1] + a[i]);
  //     count++;
  //   }
  // }
  int c = 0;
  for (int i = 0; i < n; i++)
  {
    count++;
    count += (a[i] - c);
    count++;

    if (a[i + 1] < a[i])
    {
      count += (a[i] - a[i + 1]);
      c = a[i + 1];
    }

    else
      c = a[i];
  }
  printf("%d", count);
}