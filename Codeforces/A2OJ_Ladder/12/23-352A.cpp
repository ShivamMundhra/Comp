#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, c0 = 0, c5 = 0;
  cin >> n;
  int temp;
  int output = 0;
  while (n > 0)
  {
    n--;
    cin >> temp;
    if (temp == 0)
      c0++;
    else
      c5++;
  }
  if (c0 == 0)
    cout << "-1";
  else
  {
    int w = c5 / 9;
    for (int i = 0; i < 9 * w; i++)
    {
      cout << "5";
      // output=output*10+5;
    }
    if (w != 0)
      for (int i = 0; i < c0; i++)
        cout << "0";
    // output=output*10+0;
    else
      cout << "0";
  }
  // cout<<output;
}