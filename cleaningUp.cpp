#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int m, n;
    cin >> n >> m;
    vector<bool> jobs(n, false);
    vector<int> C, A;
    for (int i = 0; i < m; i++)
    {
      int temp;
      cin >> temp;
      jobs[temp - 1] = true;
    }
    // int countC = 0, countA = 0;
    bool turnC = true;
    for (int i = 0; i < n; i++)
    {
      if (!jobs[i])
      {
        // countC += turnC ? 1 : 0;
        // countA += turnA ? 1 : 0;
        if (turnC)
        {
          C.push_back(i);
        }
        else
        {
          A.push_back(i);
        }
        turnC = !turnC;
      }
    }
    for (auto &&i : C)
    {
      cout << i + 1 << " ";
    }
    cout << "\n";
    for (auto &&i : A)
    {
      cout << i + 1 << " ";
    }
    cout << "\n";
  }
  return 0;
}