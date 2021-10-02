#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
      int currentWeather;
      cin >> currentWeather;
      count += currentWeather ? 1 : -1;
    }
    if (count > 0)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }

  return 0;
}