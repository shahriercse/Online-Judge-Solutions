#include<iostream>
using namespace std;

int main()
{
    string str;
    int count = 1;

    cin >> str;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == str[i + 1]) {
            count++;

            if(count == 7) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            count = 1;
        }

    }

    cout << "NO" << endl;

    return 0;
}
