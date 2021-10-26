#include<iostream>
using namespace std ;

int main()
{
    int i, num ;

    cin >> num ;

    int num2 = num + 11 ;
    for ( i = num ; i <= num2 ; i++ ){

        if ( i % 2 != 0 ) cout << i << endl ;
    }

    return 0 ;
}
