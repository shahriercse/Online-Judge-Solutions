#include<iostream>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    int len = str.size();
    if(len % 2 != 0) {
        cout << n << endl << str << endl;
    }

    else if(len % 2 == 0) {
        for(int i = 0; i < len; i++) {

        }
    }

    return 0;
}
