#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, t;

    cin >> t;

    while(t--) {

        cin >> a >> b;

        if(a % b == 0) {
            cout << a % b << endl;
            continue;
        }

        if(a > b) {

            long long rem = a % b;

            cout << b - rem << endl;
        }

        if(a < b) {
            cout << b - a << endl;
        }


    }

    return 0;
}

