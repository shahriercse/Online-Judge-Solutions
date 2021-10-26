#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr.push_back(x);
    }

    int mx, mn, len = arr.size();

    for (int i = 0; i < len; i++)
    {
        mx = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[len - 1]));

        if (i > 0)
            mn = min(abs(arr[i] - arr[i + 1]), arr[i] - arr[i - 1]);

        else
            mn = abs(arr[i] - arr[i + 1]);

        cout << mn << " " << mx << endl;
    }

    return 0;
}
