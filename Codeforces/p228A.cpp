#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <long> arr;

    for(int i = 0; i < 4; i++) {
        long x; cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int count = 0;

    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] == arr[i + 1]) count++;
    }

    cout << count << endl;

    return 0;
}
