#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, rem; cin >> n;

    bool isLucky = false;

    if(n % 4 == 0  || n % 7 == 0 || n % 47 == 0) isLucky = true;

    else {
        while(n != 0) {
            rem = n % 10;
            n = n / 10;

            if(rem == 7 || rem == 4) {
                isLucky = true;
            } 
        
            else {
                isLucky = false;
                break;
            }
        }
    }

    if(isLucky) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}