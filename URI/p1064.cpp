#include<iostream>
#include<cstdio>

using namespace std ;

int main()
{
   double n, avg, sum = 0 ;
   int i, count = 0 ;

    for ( int i = 0 ; i < 6 ; i++ ){

        cin >> n ;

        if ( n > 0 ){

        sum += n ;
        count++ ;

        }
    }

    cout << count << " valores positivos" << endl ;
    avg = sum / count ;

    printf( "%.1f\n", avg );
}
