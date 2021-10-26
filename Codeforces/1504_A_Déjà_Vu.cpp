#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome (string str) {
    int len = str.size();

    for(int i = 0, j = len - 1; i < len / 2; i++, j--) {
        if(str[i] != str[j]) 
           return false;
    }

   return true;
}

int main() {

    freopen("input.txt", "r", stdin);

    int t; cin >> t;
    
    string str;

    while(t--) {
        cin >> str;

        

        
    }

    return 0;
}