#include<iostream>
using namespace std;

int main()
{
    long long n, a, b, c, res;


    cin >> n;

    while( n-- ) {
        cin >> a >> b >> c;
        res = (a + b + c) / 2;

        cout << res << endl;
    }
}
