#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std ;

int main()
{
    double sum = 0, j = 1.0 ;
    for ( int i = 1 ; i < 39 ; i+=2 ){
        sum += (i/j) ;
        j *= 2 ;

    }
    cout << fixed << setprecision(2) << sum << endl ;
}
