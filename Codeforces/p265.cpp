#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int i = 0, j = 0;

    while(i < str2.size()) {if(str2[i] == str1[j]) j++; i++;}

    cout << j + 1 << endl;

    return 0;

}



