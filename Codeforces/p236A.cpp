#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;

    set <char> freq;

    for(int i = 0; i < str.size(); i++) {
        freq.insert(str[i]);
    }

    int len = freq.size();

    if(len % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;


    return 0;
}
