#include<iostream>

using namespace std ;

int main()
{
    int x, y, temp ;

    while (1) {

        cin >> x >> y ;
        if ( x == 0 || y == 0 || x < 0 || y < 0 ) break ;

        if ( x > y ) {

            temp = x ;
            x = y ;
            y = temp ;
        }
        int sum = 0 ;
        for ( int i = x ; i <= y ; i++ ){

            cout << i << " " ;
            sum += i ;
        }

        cout << "Sum=" << sum << endl ;

    }
}
