
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cout << endl;
            for (int j = 0; j <= i; j++)
            {
                cout << m << " ";
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            cout << endl;
            for (int j = 0; j < i; j++)
            {
                cout << m << " ";
            }
        }
        cout << endl;
    }

    return 0;
}