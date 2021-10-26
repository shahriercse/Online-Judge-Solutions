#include <bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2)
{

    if (s1.size() == s2.size())
        return s1 < s2;
    else
        return s1.size() < s2.size();
}

int main()
{

    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;

    vector<string> str;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }

    sort(str.begin(), str.end(), compare);

    for (int i = 0; i < str.size(); i++)
        cout << str[i] << endl;

    return 0;
}