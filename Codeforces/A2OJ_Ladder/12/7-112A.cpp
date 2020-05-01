#include <bits/stdc++.h>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;
  int flag = 0;
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  transform(b.begin(), b.end(), b.begin(), ::tolower);
  for (int i = 0; i < a.length(); i++)
  {
    if (a[i] == b[i])
      flag = 0;
    else if (a[i] < b[i])
    {
      flag = -1;
      break;
    }
    else if (a[i] > b[i])
    {
      flag = 1;
      break;
    }
  }
  cout << flag;
}