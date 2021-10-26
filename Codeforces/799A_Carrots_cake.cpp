#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d, time1, time2;

    cin >> n >> t >> k >> d;

    if(n <= k) {
        cout << "NO" << endl;
        return 0;
    }

    time1 = ceil((t * n) / k * 1.0);
    time2 = time1 - abs(t - d);

    if(time1 > time2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
