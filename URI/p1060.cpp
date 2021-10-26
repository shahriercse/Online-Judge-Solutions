#include<iostream>

using namespace std ;

int main()
{

    double n ;
    int i, c = 0 ;
    //freopen( "input.txt", "r", stdin ) ;

    for ( i = 0 ; i < 6 ; i++ ){

        cin >> n ;

         if ( n > 0 ) c++ ;

    }
    cout << c << " valores positivos" << endl ;




}
