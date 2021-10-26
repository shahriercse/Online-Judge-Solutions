#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n; cin >> n; 
    vector <int> arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    if(!count(arr.begin(), arr.end(), (1, 2, 3))) {
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 1, j = 1; i <= arr.size(); i++) {
        if(arr[i] == 1 || arr[i] == 2 || arr[i] == 3) {
            cout << i << " ";
        }
        if(j == 3) cout << endl;
        j++;
    }



    return 0;
}