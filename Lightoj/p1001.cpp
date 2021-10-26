#include<bits/stdc++.h>
using namespace std ;

int main()
{
    freopen("input.txt", "r", stdin);
	int t, n; cin >> t;

    while(t--) {
        cin >> n;
        int a, b;

        if(n > 10) {
            a = n - 10;
            b = 10;
        } 
        else {
            a = 0;
            b = n;
        }
        cout << a << " " << b << endl;
    }
    
    return 0;
}


