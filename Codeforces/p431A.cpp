#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    string str;

    cin >> a >> b >> c >> d;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '1') sum += a;
        if(str[i] == '2') sum += b;
        if(str[i] == '3') sum += c;
        if(str[i] == '4') sum += d;
    }

    cout << sum << endl;

    return 0;
}
