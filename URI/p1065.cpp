#include<iostream>

using namespace std ;

int main()
{
    int i, count = 0, n ;

    for ( i = 0 ; i < 5 ; i++ ){

            cin >> n ;

        if ( n % 2 == 0 ) count++ ;
    }

    cout << count << " valores pares" << endl ;

    return 0 ;

}
