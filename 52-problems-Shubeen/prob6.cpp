#include<iostream>
using namespace std;
int main()
{
    int n, t, rem, sum, msd, lsd ;
    cin >> t ;
    while ( t-- ){
        cin >> n ;
        lsd = n % 10 ;

        while( n > 0 ){

            rem = n % 10 ;
            n = n / 10 ;
        }

        msd = rem ;

        sum = lsd + msd ;
        cout << "sum = " << sum << endl ;

    }


}
