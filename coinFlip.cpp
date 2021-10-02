#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int g;
    cin >> g;
    while (g--)
    {
      int i, n, q;
      cin >> i >> n >> q;
      // no of coins in original direction = n / 2
      // no of coins in flipped direction = n - n / 2
      int orig = n / 2;
      int flipped = n - orig;
      cout << ((i == q) ? orig : flipped) << "\n";
    }
  }
  return 0;
}