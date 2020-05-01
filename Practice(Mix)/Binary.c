#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// char *inputString(FILE *fp, size_t size)
// {
//   //The size is extended by the input with the value of the provisional
//   char *str;
//   int ch;
//   size_t len = 0;
//   str = realloc(NULL, sizeof(char) * size); //size is start size
//   if (!str)
//     return str;
//   while (EOF != (ch = fgetc(fp)) && ch != '\n')
//   {
//     str[len++] = ch;
//     if (len == size)
//     {
//       str = realloc(str, sizeof(char) * (size += 16));
//       if (!str)
//         return str;
//     }
//   }
//   str[len++] = '\0';

//   return realloc(str, sizeof(char) * len);
// }
int main()
{
  char s[100000];
  char c = '1';
  scanf("%s", s);
  int count = 0;
  for (int i = strlen(s) - 1; i >= 0; i--)
  {
    if (s[i] == '0')
    {
      count++;
    }
    else
    {
      if (i == 0)
        break;
      int j = i;
      while (j >= 0 && s[j] == '1')
      {
        count++;
        j--;
      }
      count++;
      s[j] = '1';
      i = j + 1;
    }
  }
  printf("%d", count);
  return 0;
}