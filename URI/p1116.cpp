#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    int n ;
    double x, y ;

    cin >> n ;
    while ( n-- ){

        cin >> x >> y ;

        if ( y == 0 ) cout << "divisao impossivel" << endl ;

        else{
            cout << fixed ;
            cout << setprecision(1) ;

            cout << x / y << endl ;

        }

    }

    return 0 ;
}
