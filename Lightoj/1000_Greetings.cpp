#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int a, b, t, sum;
    int c = 0;

    cin >> t;
    while (t--) {
        cin >> a >> b;

        if (a <= 10 && b <= 10) {
            sum = a + b;
            //printf("Case %d: %d\n", ++c, sum);
            cout << "Case " << ++c << ": " << sum << endl;
        }

    }

}
