#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    int j = 0;
    for(int i = 0; i < n; i++) {
        cout << str[i];
        i += j;
        j++;
    }
    return 0;
}
