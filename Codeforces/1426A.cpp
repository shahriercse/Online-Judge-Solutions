#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, x, p, q;

    while (t--)
    {
        cin >> n >> x;

        if (n == 1)
        {
            cout << 1 << endl;
            return 0;
        }

        else if (n >= 3 && n <= x + 2)
        {
            cout << 2 << endl;
            return 0;
        }
        int l;

        for (int i = 3; i <= n; i++)
        {
            p = (i - 1) * x + 3;
            q = i * x + 2;
            if (n >= p && n <= q)
            {
                l = i;
                break;
            }
        }
        cout << l << endl;
    }

    return 0;
}