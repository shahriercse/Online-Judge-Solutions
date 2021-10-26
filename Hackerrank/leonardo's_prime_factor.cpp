#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    vector<ll> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    vector<ll>::iterator it;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, prod = 1, count = 0;
        cin >> n;

        for (it = prime.begin(); it != prime.end(); it++)
        {
            prod *= *it;

            if (prod <= n)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}