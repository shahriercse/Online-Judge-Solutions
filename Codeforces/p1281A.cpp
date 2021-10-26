#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    string str;

    cin >> n;

    while(n--) {

        getline(cin, str);

        int len = str.size();

        for(int i = len - 1; i >= 0; i--) {
            if(str[len - 1] == 'o') flag = 1;
            else if(str[len - 1] == 'u') flag = 2;
            else if(str[len - 1] == 'a') flag = 3;
        }

        if(flag == 1) cout << "FILIPINO" << endl;
        else if(flag == 2) cout << "JAPANESE" << endl;
        else if(flag == 3) cout << "KOREAN" << endl;

    }

    return 0;
}

