#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int rem = 0;
        while (n > 0)
        {
            rem = n % 10;
            n = n / 10;
            cout << rem;
        }
        cout << endl;
    }

    return 0;
}