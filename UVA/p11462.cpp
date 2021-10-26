#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std ;

long long int  arr[2000005], n ;

int main()
{

    int  i, j, temp ;


    freopen( "input.txt", "r", stdin ) ;

    while (1){

        cin >> n ;

        if( n == 0 ) break ;

        for ( i = 0 ; i < n ; i++){

            cin >> arr[i] ;
        }

        sort ( arr,  arr + n ) ;

        for ( i = 0 ; i < n ; i++ ){

            cout << arr[i] ;
            if ( i < (n-1) ){

                cout << " " ;
            }

        }

        cout << endl ;


     }

     return 0 ;


}
