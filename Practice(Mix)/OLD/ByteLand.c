#include <stdio.h>
#include <string.h>
int arrSearch(int *a, int q)
{
  for (int i = 1; i < 27; i++)
  {
    if (q == a[i])
      return i;
  }
}
void main()
{
  int t;
  char s[27];
  int asc[27];
  char w[101];
  char temp[101];
  scanf("%d", &t);
  for (int i = 0; i < 27; i++)
  {
    scanf("%c", &s[i]);
    asc[i] = (int)s[i];
  }
  // for (int i = 0; i < 27; i++)
  // {
  //   printf("%c", (char)asc[i]);
  // }
  while (t > 0)
  {
    t--;
    int i;
    char c;
    scanf("%c", &temp);
    scanf("%[^\n]", w);
    printf("%s", w);
    int len = strlen(w);
    for (i = 0; i < len; i++)
    {
      int q = (int)w[i];
      printf("%d\n", q);
      if (q == 45)
      {
        temp[i] = (char)32;
        printf("%c", temp[i]);
      }
      else if ((q >= 65 && q <= 90) || (q >= 97 && q <= 122))
      {
        if (q < 91)
        {
          q = q + 32;
          int f = arrSearch(asc, q);
          f += 96;
          f -= 32;
          temp[i] = (char)f;
        }
        else
        {
          int f = arrSearch(asc, q);
          f += 96;
          temp[i] = (char)f;
        }
      }
      else
        temp[i] = (char)q;
    }
    for (int j = 0; j < len; j++)
    {
      printf("%c", temp[i]);
    }
    printf("\n");
  }
  // for (int i = 0; i < 27; i++)
  // {
  //   printf("%c", s[i]);
  // }
}