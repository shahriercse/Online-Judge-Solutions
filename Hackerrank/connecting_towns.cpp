#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr;

        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        int prod = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            prod = (prod * arr[i]) % 1234567;
        }

        cout << prod << endl;
    }

    return 0;
}