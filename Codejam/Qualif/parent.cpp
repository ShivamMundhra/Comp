#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <list>
#include <cassert>
#include <climits>
#include <bitset>
#include <chrono>
#include <random>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

#define fastIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main()
{
  //TEmplate for competitiveProgramming
  /*#ifndef ONLINE_JUDGE
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
#endif*/

  fastIO;
  int t;
  cin >> t;
  for (int q = 1; q <= t; q++)
  {
    vector<pair<int, int>> v;
    int n, t1, t2;
    vector<char> out;
    cin >> n;
    F0R(i, n)
    {
      cin >> t1 >> t2;
      v.pb(mp(t1, t2));
    }
    int cI, jI;
    t1 = 0;
    t2 = 0;
    cI = 0;
    out.pb('C');
    int flag = 0;
    for (int i = 1; i < n; i++)
    {
      if (v[i].first >= v[cI].second)
      {
        out.pb('C');
        cI = i;
        flag = 1;
      }
      else
      {
        if (t2 == 0)
        {
          jI = i;
          out.pb('J');
          t2 = 1;
          flag = 1;
        }
        else
        {
          if (v[i].first >= v[jI].second)
          {
            out.pb('J');
            jI = i;
            flag = 1;
          }
          else
          {
            flag = i;
            break;
          }
        }
      }
    }
    if (flag != 1)
    {
      cout << "Case #" << q << ": IMPOSSIBLE ->" << flag << endl;
    }
    else
    {
      cout << "Case #" << q << ": ";
      F0R(j, out.size())
      cout << out[j];
      cout << endl;
    }
  }
}