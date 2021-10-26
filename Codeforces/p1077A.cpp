
#include<iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    long long n, a, b, k, res;
    cin >> n;
    while(n--) {

        cin >> a >> b >> k;

        res = a;
        for(int i = 2; i <= k; i++) {

            if(i % 2 == 1) res += a;

            else res -= b;
        }

        cout << res << endl;
    }
    return 0;
}
