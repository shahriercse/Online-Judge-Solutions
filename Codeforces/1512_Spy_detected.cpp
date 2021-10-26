#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int arr[n];

        int count = 0;

        for(int i = 1; i <= n; i++) cin >> arr[i];

        if(arr[1] != arr[2]) {
            if(arr[1] == arr[3]) 
                cout << '2' << endl;
                
            else cout << '1' << endl; 
        }

        else {
            int first_val = arr[1], pos;
            for(int i = 2; i <= n; i++) {
                if(first_val != arr[i]) {
                    pos = i;
                }
            }

            cout << pos << endl;
        }
    }

    return 0;
}