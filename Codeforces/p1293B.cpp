#include<bits/stdc++.h>
using namespace std;
int main()
{

    double n, res = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        res += 1 / (n - i);

    }

    cout << fixed << setprecision(12) << res << endl;

    return 0;
}
