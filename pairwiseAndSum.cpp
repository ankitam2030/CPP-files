/**
 * You are given a sequence of N integer numbers A. Calculate the sum of Ai AND Aj for all the pairs (i, j) where i < j.
 * 
 * The AND operation is the Bitwise AND operation.
 * 
 * Input:
 * The first line of input consists of the integer N.
 * The second line contains N integer numbers - the sequence A.
 * 
 * Output:
 * 
 * Output the answer to the problem on the first line of the output.
 * 
*/

#include <iostream>
#include <vector>

typedef long long int ll;

using namespace std;

int main()
{
  int n, sum = 0;
  cin >> n;
  vector<ll> A;
  for (int i = 0; i < n; i++)
  {
    ll temp;
    cin >> temp;
    for (auto &&j : A)
      sum += temp & j;
    A.push_back(temp);
  }

  cout << sum;
  cout<<"/n";

  return 0;
}
