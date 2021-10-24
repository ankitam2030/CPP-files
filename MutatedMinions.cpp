#include <iostream>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x += k;
            if (x % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
