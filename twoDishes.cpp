/**
 * Problem Code: TWODISH
*/

#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if ((n > b) || n > (a + c))
      cout << "NO\n";
    else
      cout << "YES\n";
  }
  return 0;
}