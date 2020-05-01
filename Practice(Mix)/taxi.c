#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int arr[5] = {0};
  int taxi = 0;
  int temp;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &temp);
    arr[temp]++;
  }
  taxi += arr[4];
  taxi += arr[2] / 2;
  if (arr[2] % 2 != 0)
    arr[2] = 1;
  else
    arr[2] = 0;
  if (arr[1] == arr[3])
  {
    taxi += arr[1];
    taxi += arr[2];
  }
  else if (arr[1] > arr[3])
  {
    taxi += arr[3];
    arr[1] -= arr[3];
    arr[3] = 0;
    if (arr[1] > (2 * arr[2]))
    {
      taxi += arr[2];
      arr[1] -= 2 * arr[2];
      taxi = taxi + (arr[1] / 4);
      if(arr[1]%4 !=0)  taxi+=1;
    }
    else
    {
      taxi += arr[2];
    }
  }
  else
  {
    taxi += arr[3];
    taxi += arr[2];
  }
  printf("%d\n", taxi);
}