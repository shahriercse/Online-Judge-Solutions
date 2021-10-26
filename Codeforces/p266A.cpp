#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str;

    cin >> str;

    int len = str.size(), count = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] == str[i + 1]) {
            count++;
        }
    }
    cout << count << endl;


    return 0;
}
