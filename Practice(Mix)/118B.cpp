#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, f = 0;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    // cout << "HEllo::" << i;
    if (i == 0)
      f = 1;
    else
      f = 0;
    for (int j = 0; j <= 2 * (n - i); j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << j;
      if (f == 0)
      {
        cout << " ";
      }
    }
    for (int j = i - 1; j >= 0; j--)
    {
      cout << j;
      if (j != 0)
        cout << " ";
    }
    // for (int j = 0; j <= n - i; j++)
    // {
    //   cout << " ";
    // }
    cout << endl;
  }
  f = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    if (i == 0)
      f = 1;
    else
      f = 0;
    for (int j = 0; j <= 2 * (n - i); j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << j;
      if (f == 0)
      {
        cout << " ";
      }
    }
    for (int j = i - 1; j >= 0; j--)
    {
      cout << j;
      if (j != 0)
        cout << " ";
    }
    // for (int j = 0; j <= n - i; j++)
    // {
    //   cout << " ";
    // }
    cout << endl;
  }
}