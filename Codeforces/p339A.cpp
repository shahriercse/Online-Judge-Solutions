#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    vector <char> arr;

    int len = str.size();

    for(int i = 0; i < len; i++) 
        if(isdigit(str[i])) arr.push_back(str[i]);

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << "+\n"[i == arr.size() - 1];
    }

    return 0;
}