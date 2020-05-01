#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    int t = (int)s[i] - 97;
    cout << t;
  }
}