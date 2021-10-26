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

    ll queries, q;
    cin >> queries;

    while (queries--)
    {
        cin >> q;
        int pos1, pos2;

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (arr[i] == q)
                pos1 = i;
        }
    }

    return 0;
}