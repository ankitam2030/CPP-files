#include <iostream>
#include <map>
using namespace std;

typedef long long int ll;

map<ll, ll> dp;

ll getUSD(ll n)
{
  if (n <= 2)
    return dp[n] = n;
  if (dp.count(n))
    return dp[n];
  return dp[n] = max(
             n,
             getUSD(n / 2) + getUSD(n / 3) + getUSD(n / 4));
}

int main()
{
  ll n;
  while (cin >> n)
  {
    cout << getUSD(n) << "\n";
  }

  return 0;
}