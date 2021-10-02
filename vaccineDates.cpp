#include <iostream>

typedef long long int ll;

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll d, l, r;
    cin >> d >> l >> r;
    if (d >= l && d <= r)
    {
      cout << "Take second dose now\n";
    }
    else if (d < l)
      cout << "Too Early\n";
    else
      cout << "Too Late\n";
  }
  return 0;
}