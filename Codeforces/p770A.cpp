#include<bits/stdc++.h>
using namespace std;

int main()
{
    char add = 'a';

    int n, k; cin >> n >> k;

    vector <char> arr;

    for(int i = 0; i < k; i++) {
        arr.push_back(add + i);
    }

    for(int i = 0; i < n - k; i++) {
        arr.push_back(add + (i % k));
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }

    puts("");

    return 0;
}