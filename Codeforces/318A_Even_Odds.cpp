#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n, k, div;
    vector <ll> arr;
    vector<ll>::iterator it;

    cin >> n >> k;

    div = n / 2;

    if(div > k) {
        for(ll i = 1; i <= div; i++) {
            if(i % 2 != 0) arr.push_back(i);
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    it = find(arr.begin(), arr.end(), k);

    cout << *it << endl;

  

    return 0;
}