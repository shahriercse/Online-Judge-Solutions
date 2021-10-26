#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int n ;
    while( cin >> n ){

      if ( n == 0 ) {break ;}

        for ( int i = 1 ; i < n ; i++ ){

            cout << i << " " ;
        }

        cout << n << endl ;

    }

    return 0 ;

}
