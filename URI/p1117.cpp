#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    double n, arr[3], avg ;
    int i = 0 ;

    while (1) {

        cin >> n ;

        if ( n >= 0 && n <= 10 ){

            arr[i] = n ;
            i++ ;
        }

        else cout << "nota invalida" << endl ;

        if ( i == 2 ) break ;


    }

        avg = (arr[0] + arr[1]) / 2 ;
        cout << fixed ;
        cout << setprecision(2) ;
        cout << "media = " << avg << endl ;






}
