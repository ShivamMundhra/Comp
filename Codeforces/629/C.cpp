#include <bits/stdc++.h>
// #include<string>
typedef long long int ll;
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    int n;
    cin >> n;
    string s;
    string a = "1";
    string b = "1";
    string t1 = "1";
    string t0 = "0";
    string t2 = "2";
    int flag1 = 0, flag0 = 0, flag2 = 0;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
      if (s[i] == '1')
      {
        if (flag1 == 0)
        {
          a = a + t1;
          b = b + t0;
          flag1 = 1;
        }
        else
        {
          a = a + t0;
          b = b + t1;
        }
      }
      if (s[i] == '2')
      {
        if (flag1 == 0)
        {
          a = a + t1;
          b = b + t1;
        }
        else
        {
          a = a + t0;
          b = b + t2;
        }
      }
      if (s[i] == '0')
      {
        a = a + t0;
        b = b + t0;
      }
    }
    cout << a << endl;
    cout << b << endl;
  }
}