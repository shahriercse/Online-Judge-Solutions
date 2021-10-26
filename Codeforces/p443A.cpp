#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    string str;

    getline(cin, str);

    sort(str.begin(), str.end());

    int count = 0;

    for(int i = 0; i < str.size(); ++i) {

        if(isalpha(str[i])) {
            count++;

            if(str[i] == str[i + 1]) count--;
        }
    }
    cout << count << endl;

    return 0;


    /*
    /// Another trick



    string str;
    set <char> s;

    getline(cin, str);

    sort (str.begin(), str.end());

    int count = 0;
    for(int i = 0; i < str.size(); i++) {
        if(isalpha(str[i])) {
            s.insert(str[i]);
            count++;

            if(str[i] == str[i + 1]) count--;
        }


    }

    cout << count << endl;

    return 0;

    */

}
