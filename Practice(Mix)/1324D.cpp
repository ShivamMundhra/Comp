#include <bits/stdc++.h>
#include <vector>

typedef long long int ll;
using namespace std;
template <typename T>

bool compare(const T &a, const T &b)
{
  return a < b;
}
int main()
{
  int n;
  cin >> n;
  int count = 0;
  vector<ll> a, b;
  vector<pair<ll, int>> c;
  ll temp;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    a.push_back(temp);
  }
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    b.push_back(temp);
    c.push_back(make_pair((a[i] - b[i]), i));
  }
  sort(c.begin(), c.end());
  // for (int i = 0; i < c.size(); i++)
  //   cout << c[i].first << ":" << c[i].second << " ";
  for (int i = 0; i < c.size(); i++)
  {
    temp = -1 * c[i].first;

    vector<pair<ll, int>>::iterator it = upper_bound(c.begin(), c.end(), make_pair(temp, INT_MAX), compare<pair<ll, int>>);
    // int t = c.end() - it;
    // cout << t << endl;
    cout << (*it).first << ":" << (c.end() - it) << endl;
    count += (c.end() - it);
    //   for (vector<pair<ll, int>>::iterator j = it; j < c.end(); j++)
    //   {
    //     if ((*j).second > c[i].second)
    //       count++;
    //   }
  }
  cout << count;
}