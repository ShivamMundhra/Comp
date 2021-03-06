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
  // #ifndef ONLINE_JUDGE
  //   freopen("in.txt", "r", stdin);
  //   freopen("out.txt", "w", stdout);
  // #endif

  fastIO;
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vl v;
    ll temp;
    F0R(i, n)
    {
      cin >> temp;
      v.pb(temp);
    }
    sort(v.begin(), v.end());
    int j = 0;
    ll sum = 0;
    temp = 0;
    // auto itr = upper_bound(v.begin(), v.end(), 0);
    // int k = v.end() - itr;
    // int w = n - k;
    // cout << k << endl;
    F0Rd(i, n)
    {
      // while (j >= v[w])
      // {
      //   w++;
      // }
      // // w++;
      // k--;
      // sum += v[i];
      // if (w <= i)
      // {
      //   sum -= k;
      //   j++;
      // }
      v[i] -= temp;
      temp++;
      if (v[i] <= 0)
        break;
      else
        sum += v[i];
    }
    cout << sum << endl;
  }
}