#include<bits/stdc++.h>
using namespace std;

int main(){ 

    freopen("input.txt", "r", stdin);

    int n, k;

    cin >> n >> k;

    vector <char> arr;

    string str;

    int count = 0;
    while(n--) {
        cin >> str;

        for(int i = 0; i < str.size(); i++) {
            if((str[i] - '0') % 10 <= k) {
                arr.push_back(str[i]);
            }
        }

        if(arr.size() == k + 1) count++;

        arr.clear();
    }

    cout << count << endl;

    return 0;
}