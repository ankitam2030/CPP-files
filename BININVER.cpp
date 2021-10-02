#include <iostream>
#include <vector>

typedef long long int ll;
using namespace std;

int GCD(int a, int b)
{
  if (a == 0)
    return b;
  return GCD(b % a, a);
}

int GCDN(vector<ll> A)
{
  ll result = A[0];
  for (int i = 0; i < A.size(); i++)
  {
    result = GCD(A[i], result);
    if (!result)
      return 1;
  }
  return result;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> A(n, 0);
    for (int i = 0; i < n; i++)
      cin >> A[i];
    ll gcd = GCDN(A);
    int count = 0;
    while (!(gcd % 2))
    {
      gcd /= 2;
      count++;
    }
    cout << count << endl;
  }
  return 0;
}