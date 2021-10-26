#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char s = 'a';
    int len = str.size(), cost1, cost2, cost, sum = 0;

    for(int i = 0; i < len; i++) {
        if(str[i] < s) {
            cost1 = ((str[i] + 26) - s);
            cost2 = abs(s - str[i]);
            s = str[i];
        }

        else {
            cost1 = ((s + 26) - str[i]);
            cost2 = abs(s - str[i]);
            s = str[i];
        }

        cost = min(cost1, cost2);
        sum += cost;

    }

    cerr << sum << endl;


    return 0;
}
