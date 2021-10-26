#include<iostream>
using namespace std;

int main()
{
    int n, res, count = 0;
    cin >> n;

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); ++i) {
        if(str[i] == 'x' && str[i + 1] == 'x' && str[i + 2] == 'x') {
            count++;
            res = count - 2;
        }
    }

    cout << count << endl;

    return 0;
}
