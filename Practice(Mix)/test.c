#include <stdio.h>
#include <string.h>
int main()
{
  // int n, m;
  // scanf("%d %d", &n, &m);
  // char a[n][m];
  // char temp;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     scanf(" %c", &a[i][j]);
  //     // if (temp == "\n")
  //     //   j--;
  //     // else
  //     //   a[i][j] == temp;
  //   }
  //   // scanf("\n", &temp);
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     printf("%c->", a[i][j]);
  //   }
  //   // printf("HEloo\n");
  // }
  char s[10000];
  scanf("%s", s);
  char c = '0';
  printf("%d->", strlen(s));
  for (int i = strlen(s) - 1; i >= 0; i--)
  {
    s[i] = c;
  }
  printf("%s", s);
  // for (int i = strlen(s) - 1; i >= 0; i--)
  // {
  //   printf("%d->", (int)s[i]);
  // }
}