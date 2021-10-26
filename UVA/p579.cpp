#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int h, m ;

    scanf("%d:%d", &h, &m) ;

    if ((h == 9 && m == 0) || (h == 3 && m == 0))
        cout << "90.000" << endl ;

    if ( (h == 12 && m == 0) ) cout << "0.000" << endl ;

    if ((h == 6 && m == 0)) cout << "180.000" << endl ;






    return 0 ;

}
