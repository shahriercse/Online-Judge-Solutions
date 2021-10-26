#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    string str;

    while(t--) {

        cin >> str;
        cout << str[0];
        int len = str.size(), j;

        for(int i = 1; i < len - 1; i++) {
            j = i;
            if(j % 2) continue;

            cout << str[i];

        }
        cout << str[str.size() - 1] << endl;
    }

    return 0;
}