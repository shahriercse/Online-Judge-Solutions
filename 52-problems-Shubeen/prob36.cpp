#include <bits/stdc++.h>
using namespace std;

int main()
{

    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;

    int n;
    vector<string> str;

    while (t--)
    {
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            str.push_back(s);
        }
        sort(str.begin(), str.end());
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << str[i] << endl;
        cout << endl;
    }

    return 0;
}