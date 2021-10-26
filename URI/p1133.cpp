#include<iostream>
using namespace std ;

int main()
{
    int i, j ;

    cin >> i >> j ;

    if ( i > j ) {

        int temp = i ;
        i = j ;
        j = temp ;
    }

    for ( int k = i + 1 ; k < j ; k++ ){

        if ( (k % 5 == 2) || (k % 5 == 3) )

            cout << k << endl ;

    }

    return 0 ;



}
