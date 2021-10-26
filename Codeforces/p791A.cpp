#include<iostream>

using namespace std ;

int main()
{

    int a , b,c ;

    cin >> a >> b ;

    c = 0 ;

    while ( a <= b ){

        a *= 3 ;
        b *= 2 ;

        c++ ;

    }

    cout << c ;

}
