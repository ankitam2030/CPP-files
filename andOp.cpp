/**
 * Code: TAAND
 * 
*/

#include <iostream>
#include <vector>
#include <algorithm>

typedef long long int ll;

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<ll> A(n, 0);
  ll maxi = -1, val;
  for (int i = 0; i < n; i++)
    cin >> A[i];

  sort(A.begin(), A.end(), greater<ll>());
  for (int j = 0; j < n - 1; j++)
  {
    ll temp = A[j + 1] & A[j];
    if (temp >= maxi)
      maxi = max(temp, maxi);
  }
  cout << maxi;
  return 0;
}