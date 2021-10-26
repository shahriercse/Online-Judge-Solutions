#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < n; i++) {
       if(str[i] == 'n') { cout << "1" << " "; }
    }


    for(int i = 0; i < n; i++) {
        if(str[i] == 'z') { cout << "0" << " "; }
    }
    cout << endl;

    return 0;
}
