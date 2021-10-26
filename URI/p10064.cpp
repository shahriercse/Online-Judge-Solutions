#include<iostream>


using namespace std ;

int main()

{
    //freopen( "input.txt", "r", stdin ) ;
    double n, arr[6], sum = 0 ;
    int i, c = 0, m ;

        for ( i = 0 ; i < 6 ; i++ ){

            cin >> arr[i] ;
            if ( arr[i] > 0 ) c++ ;

        }

        for ( i = 0 ; i < 6 ; i++ ){

             if ( arr[i] > 0 )
                sum += arr[i] ;

    }
    cout << c << " valores positivos" << endl ;
    cout << sum / c << endl ;

}
