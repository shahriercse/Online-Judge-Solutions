#include<iostream>
using namespace std;

int main()
{
    int n, s, t, res, x;
    cin >> x;

    while(x--) {
        cin >> n >> s >> t;
        res = max (n - s, n - t) + 1;
        cout << res << endl;
    }

    return 0;
}
