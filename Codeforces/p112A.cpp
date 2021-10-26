#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, str2;

    cin >> str >> str2;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] < 91) str[i] += 32;

        if(str2[i] < 91)  str2[i] += 32;
    }

    if(str == str2) cout << "0" << endl;

    else if(str > str2) cout << "1" << endl;

    else cout << "-1" << endl;

    return 0;
}
