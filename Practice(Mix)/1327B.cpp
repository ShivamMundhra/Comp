#include <bits/stdc++.h>
#include <vector>
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
    int a[n + 1];
    memset(a, 0, sizeof(a));
    vector<int> v;
    for (int i = 1; i < n + 1; i++)
    {
      int k;
      cin >> k;
      // cout << "k: " << k << endl;
      int flag = 0;
      int temp;
      for (int j = 0; j < k; j++)
      {
        cin >> temp;
        // cout << "temp: " << temp << endl;
        if (flag == 0 && a[temp] == 0)
        {
          a[temp] = 1;
          flag = 1;
        }
      }
      if (flag == 0)
        v.push_back(i);
    }
    if (v.size() == 0)
    {
      cout << "OPTIMAL" << endl;
    }
    else
    {
      int prince;
      for (int i = 1; i < n + 1; i++)
      {
        if (a[i] == 0)
        {
          prince = i;
          break;
        }
      }
      cout << "IMPROVE" << endl;
      cout << v[0] << " " << prince << endl;
    }
    // for (int i = 0; i < v.size(); i++)
    //   cout << "vector " << v[i] << " ";
    // cout << "HEllo" << endl;
  }
  // cout << "k: " << endl;
}