#include <bits/stdc++.h>
// #include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    string s;
    cin >> s;
    // cout << s;
    int k, x;
    cin >> k >> x;
    // cout << k << x << endl;
    int a[26] = {0};
    int preCou = 0;
    for (int i = 0; i < s.length(); i++)
    {
      int t = (int)s[i] - 97;
      // cout << t << " ";
      if (a[t] < x)
        preCou++;

      else
      {
        if (k > 0)
        {
          // preCou++;
          k--;
        }
        else
          break;
      }
      a[t]++;
    }
    cout << preCou << endl;
  }
}