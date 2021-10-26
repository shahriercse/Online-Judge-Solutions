#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string str;

    set<char> arr;

    int count = 0;

    while (n--)
    {

        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if ((str[i] - '0') % 10 <= k)
                arr.insert(str[i]);
        }

        if (arr.size() == k + 1)
            count++;
        arr.clear();
    }

    cout << count << endl;

    return 0;
}