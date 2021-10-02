#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

typedef long long int ll;

int main()
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    int N;
    cin >> N;

    vector<ll> S(N);
    for (int j = 0; j < N; j++)
    {
      cin >> S[j];
    }
    ll min = INT_MAX;

    // Using Sorting and then comparing 2 adjacent numbers
    sort(S.begin(), S.end());
    for (int j = 0; j < N - 1; j++)
    {
      ll d = S[j + 1] - S[j];
      if (d < min)
        min = d;
    }

    cout << min << "\n";
  }

  return 0;
}