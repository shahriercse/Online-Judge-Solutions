#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    vector <int> arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    
    int len = arr.size();

    int even = 0, odd = 0;

    for(int i = 0; i < len; i++) {
        if(arr[i] % 2) even++;
        else odd++;
    }

    cout << min(even, odd) << endl;

    return 0;
}