#include <stdio.h>
int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int count = 0;
  for (int i = 0; i < n - 2; i++)
  {
    int temp1 = k * a[i];
    for (int j = i + 1; j < n - 1; j++)
    {
      if (a[j] == temp1)
      {
        int temp2 = k * a[j];
        for (int k = j + 1; k < n; k++)
        {
          if (a[k] == temp2)
            count++;
        }
      }
    }
  }
  printf("%d\n", count);
}