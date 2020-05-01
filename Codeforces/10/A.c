#include <stdio.h>
int main()
{
  int n;
  int temp1, temp2;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &temp1, &temp2);
    a[i] = temp2;
  }
  int k;
  scanf("%d", &k);
  int i;
  for (i = 0; i < n; i++)
  {
    if (a[i] >= k)
    {
      break;
    }
  }
  printf("%d", (n - i));
}