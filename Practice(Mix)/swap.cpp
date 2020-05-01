#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

typedef long long int ll;
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    vector<pair<int, int>> v;
    int n, temp, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> temp;
      v.push_back(make_pair(temp,0));
    }
    for (int i = 1; i < n-1; i++)
    {
      if(v[i].second !=0){
        if(v[i-1].second!=0 &&v[i+1].second!=0 ){
          if(v[i-1].first >v[i].first && v[i])
        }
      }
      
    }
    for (int i = 0; i < n; i++)
    {
      sum += (i + 1) * v[i];
    }
    cout << sum << endl;
  }
}