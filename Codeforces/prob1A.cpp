#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std ;

int main()
{
    double a, b, c ;

    while ( scanf("%lf%lf%lf", &a, &b, &c) == 3 ){

        double res = ceil(a/c) * ceil (b/c) ;

        printf( "%.0lf\n", res ) ;

    }


    return 0 ;
}
