#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> v;
  int temp;
  while (n > 0)
  {
    n--;
    cin >> temp;
    v.push_back(temp);
    // cout << "heloo:" << v[v.size() - 1] << endl;
  }
  sort(v.begin(), v.end());
  // for (int i = 0; i < v.size(); i++)
  //   cout << "World:" << v[i] << endl;
  auto itr1 = lower_bound(v.begin(), v.end(), 0);
  auto itr2 = upper_bound(v.begin(), v.end(), 0);
  int noOfZero = itr2 - itr1;
  int neg = itr1 - v.begin();
  int money = 0, c = 0;
  ;
  // if(neg>=m)
  // for(int i=0;i<m;i++) money+=v[i];
  while (c < m && v[c] <= 0)
    money += v[c], c++;
  money *= -1;
  cout << money;
}