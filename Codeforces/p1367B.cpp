#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;

    vector <int> arr;

    while(t--) {

        cin >> n;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            arr.push_back(x);
        }

        int c1 = 0, c2 = 0, c3 = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            
            if(arr[i] % 2 == 0 && i % 2 == 0) c1++;
            
            if(i % 2 == 0) c2++;
            
            if(arr[i] % 2 == 0) c3++; 
        }

        if(c2 == c3) cout << abs(c2 - c1) << endl;

        else cout << -1 << endl; 

        arr.clear();
    }

    return 0;
}