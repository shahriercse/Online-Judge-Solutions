#include<iostream>
#define size 25
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    string str1[size], str2[size];

    for(int i = 0; i < m; i++) {
        cin >> str1[i];
    }

    for(int j = 0; j < n; j++) {
        cin >> str2[j];
    }

    int t, y; cin >> t;

    while(t--) {

        cin >> y;

        y--;

        cout << str1[y % m] + str2[y % n] << endl;

    }

    return 0;
}
