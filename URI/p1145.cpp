#include<iostream>
using namespace std ;

int main()
{
    int n, x, i ;
    cin >> n >> x ;

    for ( int i = 1, j = 0 ; i <= x ; i++ ){
        j++ ;

        if ( j == n ) cout << i ;
        else cout << i << " " ;
        if ( j == n ) { j = 0 ; cout << endl ; }

    }

    return 0 ;
}

