/*Chefland has 2 different types of coconut, type A and type B. Type A contains only xa milliliters of coconut water and type B contains only xb grams of coconut pulp. Chef's nutritionist has advised him to consume Xa milliliters of coconut water and Xb grams of coconut pulp every week in the summer. Find the total number of coconuts (type A + type B) that Chef should buy each week to keep himself active in the hot weather.*/
#include <iostream>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    int xa, xb, xA, xB, total;
    for (int i = 0; i < tc; i++)
    {
        cin >> xa >> xb >> xA >> xB;
        total = xA / xa + xB / xb;
        cout << total << endl;
    }
    return 0;
}