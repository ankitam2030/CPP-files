#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n == 1)
      cout << 3 << "\n";
    else
    {
      string x = "1";
      for (int i = 0; i < n - 2; i++)
        x += "0";
      x += "2";
      cout << x << endl;
    }
  }
  return 0;
}