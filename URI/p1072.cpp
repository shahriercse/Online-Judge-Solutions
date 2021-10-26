#include<iostream>
using namespace std ;

int main()
{
    int n, x, i, a = 0, b = 0 ;

    cin >> n ;

    while ( n-- ){

        cin >> x ;

        if ( x >= 10 && x <= 20 ) a++ ;
        else b++ ;

    }
        cout << a << " in" << endl ;
        cout << b << " out" << endl ;




}
