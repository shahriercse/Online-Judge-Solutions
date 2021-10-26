#include<iostream>
using namespace std ;

int main()
{
    int n, x, y, temp ;
    cin >> n ;

    while ( n-- ){

        cin >> x >> y ;

        if ( x > y ){

            temp = x ;
            x = y ;
            y = temp ;
        }
        if ( x % 2 != 0 ) x++ ;
        int sum = 0 ;
        for ( int i = x ; i < y ; i++ ){

            if ( i % 2 != 0 ) sum += i ;


        }
        cout << sum << endl ;
    }
}
