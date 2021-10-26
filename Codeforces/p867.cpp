#include<iostream>
using namespace std ;

int main()
{
    string str;
    int n; cin >> n;
    cin >> str;
    int count = 0, count1 = 0;
    for(int i = 0; i < str.size(); i++) {
        if( str[i] == 'S' && str[i + 1] == 'F' ) count++;
        else if( str[i] == 'F' && str[i + 1] == 'S' ) count1++;
    }

    if( count > count1 ) cout << "YES" << endl;
    else cout << "NO" << endl;

}
