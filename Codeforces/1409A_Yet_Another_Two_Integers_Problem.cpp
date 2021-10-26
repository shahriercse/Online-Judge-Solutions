#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    double a, b;

    while (t--)
    {
        cin >> a >> b;

        int res = ceil(abs(a - b) / 10);

        cout << res << endl;
    }
    return 0;
}