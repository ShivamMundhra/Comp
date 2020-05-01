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

// template <class T>

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

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main()
{
  int t;
  cin >> t;
  while (t > 0)
  {
    t--;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll x, y, x1, x2, y1, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    ll t1 = x + b - a;
    ll t2 = y + d - c;
    if ((x1 == x2 && (a > 0 || b > 0)) || (y1 == y2 && (c > 0 || d > 0)))
      cout << "No\n";
    else if ((t1 < x1 || t1 > x2) || (t2 < y1 || t2 > y2))
    {
      cout << "No\n";
    }
    else
      cout << "Yes\n";
  }
}