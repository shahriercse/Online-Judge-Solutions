#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    int n;

    while(t--) {

        cin >> n;

        for(int i = 1; i <= n; i++) {
            int sum = 1;
            int num = sqrt(i);
            for(int j = 2; j <= num; j++) {
                if(i % j == 0) {
                    sum += j + i / j;
                }
            }

            if(sum == i) {
                cout << i << endl;
            }
        }

    }
}
