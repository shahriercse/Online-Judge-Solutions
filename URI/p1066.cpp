#include<iostream>
using namespace std ;

int main()
{
    int i, num, e = 0, o= 0 , p = 0, n=0 ;

    for ( i = 0 ; i < 5 ; i++ ){
        cin >> num ;
        if ( num % 2 == 0 ) e++ ;
        if ( num % 2 != 0 ) o++ ;
        if ( num > 0 ) p++ ;
        if ( num < 0 ) n++ ;
    }

    cout << e << " valor(es) par(es)" << endl ;
    cout << o << " valor(es) impar(es)" << endl ;
    cout << p << " valor(es) positivo(s)" << endl ;
    cout << n << " valor(es) negativo(s)" << endl ;
}
