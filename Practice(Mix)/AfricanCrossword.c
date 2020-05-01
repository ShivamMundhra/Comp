#include <stdio.h>
int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  char a[n][m];
  int r[n][26], c[m][26];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      r[i][j] = 0;
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      c[i][j] = 0;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf(" %c", &a[i][j]);
      r[i][(int)a[i][j] - 97]++;
      c[j][(int)a[i][j] - 97]++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (r[i][(int)a[i][j] - 97] <= 1 && c[j][(int)a[i][j] - 97] <= 1)
      {
        printf("%c", a[i][j]);
      }
    }
  }
}