#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n; cin >> n;

    while(n--) {

        cin >> str;
        int len = str.size();

        if(len <= 10) cout << str << endl;

        else cout << str.front() << len - 2 << str.back() << endl;
    }
   
    return 0;
}