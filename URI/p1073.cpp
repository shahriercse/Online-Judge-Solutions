#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int n, x, i ;

    cin >> n ;
    for ( int i = 1 ;   i <= n ; i++ ){

        if ( i % 2 == 0 ) {

            x = i * i ;

        }
        else continue ;

        printf( "%d^%d = %d\n", i, 2, x );

    }


}
