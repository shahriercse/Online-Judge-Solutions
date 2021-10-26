#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }

    ll queries, pos1, pos2;
    cin >> queries;

    cin >> pos1 >> pos2;

    arr.erase(arr.begin() + queries - 1);
    arr.erase(arr.begin() + pos1 - 1, arr.begin() + pos2 - 1);

    cout << arr.size() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
