#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    vector <int> arr;
    map <int, int> freq; 

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    for(int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    int max = 0;

    for(auto it = freq.begin(); it != freq.end(); it++) {
        if(max < it -> second) max = it -> second;
    }

    cout << max << endl;


    return 0;
}
