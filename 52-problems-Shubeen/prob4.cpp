#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t; cin >> t;

    int n, count = 1;

    while(t--) {

        cin >> n;

        cout << "Case " << count <<  ":";

        for(int i = 1; i <= n; i++) {
            if(n % i == 0) cout << " " << i;
        }

        count++;

        cout << endl;

    }

    return 0;
}
