#include <iostream>
#include <string>

using namespace std;

int main()
{
  string x;
  int flag = 0;
  cin >> x;
  for (char c : x)
  {
    if (c == 'H' || c == 'Q' || c == '9')
    {
      cout << "YES" << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    cout << "NO" << endl;
  return 0;
}