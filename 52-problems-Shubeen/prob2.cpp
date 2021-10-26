#include<iostream>
using namespace std;
int main()
{
    int t;

    string str;

    cin >> t;
    while(t--) {
        cin >> str;

        int len = str.size();

        if(str[len - 1] % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;

    }

    return 0;
}

