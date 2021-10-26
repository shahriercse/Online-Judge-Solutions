#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    double k;
    cin >> t;
    while (t--){

        cin >> n;
        k = sqrt(n) ;
        if (k * k == n){

            cout << "YES" << endl ;
        }
        else {

            cout << "NO" << endl ;

        }

    }

    return 0;


}
