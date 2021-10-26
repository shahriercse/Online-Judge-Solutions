#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll find_zeros (ll n) {
    ll sum = 0;

    for(int i = 1; i <= 15; i++) {

        int a = (int)(pow(5, i) + 0.5);

        sum += n / a;
    }

    return sum;
}

int main() {
    
    int n, k = 0;

    ll zero;
    
    cin >> n;

    while(n--) {

        cin >> zero;

        ll left = 1, right = 1e18, mid, count, res = 0;

        for(int  i = 1; i <= 60; i++) {

            mid = (left + right) / 2.0;

            count = find_zeros(mid);

            if(count == zero) { 
                res = mid; 
                break;
            }

            else if(count >= zero) right = mid;

            else left = mid + 1;
        }

        cout << "Case " << ++k << ": "; 

        if(res == 0) 
            cout << "impossible" << endl;

        else {
            cout << (res / 5) * 5 << endl;
        }
    }

    return 0;
}