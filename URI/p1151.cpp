#include<iostream>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;

    int x = 0 , y = 1, i ;

    cout << x << " " << y << " " ;

    for ( int i = 2 ; i < n-1 ; i++ ){

        int z = x + y ;

        cout << z << " " ;

        x = y ;
        y = z ;

    }
    cout << x+y << endl ;

    return 0 ;

}

