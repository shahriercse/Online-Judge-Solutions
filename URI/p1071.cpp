#include<iostream>

using namespace std ;

int main()
{
    int i, x, y, t, a, b, n, sum = 0 ;
    cin >> x >> y ;

    if ( x > y ){
       t = x ;
       x = y ;
       y = t ;
    }

    if ( x % 2 == 0 ) {

        x++ ;
        n = x;
    }

    else n = x + 2 ;

    for ( i = n ; i < y ; i += 2 ){
            sum += i ;
    }

    cout << sum << endl ;


}
