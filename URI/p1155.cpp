#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    double sum = 0 ;
    for ( int i = 1 ; i <= 100 ; i++ ){
       sum += 1/(i*1.0) ;
    }

    cout << fixed ;
    cout << setprecision(2) ;
    cout << sum << endl ;

    return 0 ;

}
