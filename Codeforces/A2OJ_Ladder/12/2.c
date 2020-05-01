#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[5][5];
  int row, column;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &a[i][j]);
      if (a[i][j] == 1)
      {
        row = i;
        column = j;
      }
    }
  }
  int count = 0;
  count += abs(2 - row);
  count += abs(2 - column);
  printf("%d", count);
}