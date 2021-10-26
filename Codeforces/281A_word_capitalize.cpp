#include<bits/stdc++.h>
using namespace std;

int main() {

    string str;

    cin >> str;

    int first_character = (int)str[0];

    if(first_character >= 97 && first_character <= 123)
        str[0] = char(str[0] - ' ');

    cout << str << endl;

    return 0;
}
