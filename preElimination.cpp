#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n = 0, k = 1;
    cin >> n >> k;
    vector<ll> s(n);
    for (int i = 0; i < n; i++)
      cin >> s[i];

    sort(s.begin(), s.end(), greater<ll>());

    ll sAtK = s[k - 1];
    int i = k, count = k;
    while (i < n)
    {
      if (s[i] != sAtK)
        break;
      count++;
      i++;
    }

    cout << count << "\n";
  }

  return 0;
}