#include <iostream>
#include <vector>

using namespace std;

bool solve(int n)
{
  vector<int> h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];
  if (!(n % 2))
    return false;

  int height = 1;
  for (int left = 0, right = n - 1; left <= right; left++, right--)
  {
    if (h[left] != height || h[left] != h[right])
      return false;
    height++;
  }
  return true;
}

int main()
{
  int s;
  cin >> s;
  while (s--)
  {
    int n;
    bool valid = true;
    cin >> n;
    valid = solve(n);
    string ans = valid ? "yes" : "no";
    cout << ans << "\n";
  }

  return 0;
}