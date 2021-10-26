#include <iostream>
using namespace std ;


int main()
{
    int i, j, sum = 0, temp ;

    cin >> i >> j ;
    if ( i > j ) {

      temp = i ;
      i = j ;
      j = temp ;

    }

    for ( int k = i ; k <= j ; k++ ){

          if ( k % 13 != 0){

              sum += k ;

          }

    }
    cout << sum << endl ;

    return 0 ;

}
