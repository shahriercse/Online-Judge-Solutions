#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n, div,rem, res, t;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n == 2) cout << "2" << endl;
        else {
             div = n / 2;
             rem = n % 2;

             res = abs(n - ((div + rem) * 2));
             cout << res << endl;

        }
    }

    return 0;
}
