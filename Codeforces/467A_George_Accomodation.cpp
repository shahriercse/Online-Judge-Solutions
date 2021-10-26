#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin >> t;
    int a, b, count = 0;

    while(t--) {
        cin >> a >> b;

        if(a < b && abs(a - b) >= 2) count++;
        
    }

    cout << count << endl;

    return 0;
}