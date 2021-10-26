#include<iostream>
using namespace std ;

int main()
{
    int n ;
    while (1) {
    cin >> n ;
    int arr[n][n] ;
    if ( n == 0 ) break ;

    for ( int i = 1 ; i <= n ; i++ ){
        for ( int j = 1 ; j <= n ; j++ ){

            cin >> arr[i][j] ;
        }
    }

    int row_count = 0, row ;

    for ( int i = 1 ; i <= n ; i++ ){
            int sum = 0 ;
        for ( int j = 1 ; j <= n ; j++ ){

              sum += arr[i][j] ;

        }
    if ( sum % 2 == 1 ) {

        row_count++ ;
        row = i ;
    }
     }

     int col_count = 0, col ;
     for ( int i = 1 ; i <= n ; i++ ){
            int sum = 0 ;
        for ( int j = 1 ; j <= n ; j++ ){

              sum += arr[j][i] ;

        }


    if ( sum % 2 == 1 ) {

        col_count++ ;
        col = i ;
    }
     }

     if ( row_count == 0 && col_count == 0 )
        cout << "OK" << endl ;

    else if ( row_count == 1 && col_count == 1 )
      cout << "Change bit " << "(" << row << "," << col << ")" << endl ;

     else
        cout << "Corrupt" << endl ;

    }


}
