#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;

int main()
{
    string str ;
    int count = 1 ;

    while ( 1 ) {

        cin >> str ;

        if ( str[0] == '*' ) break ;

        else if ( str[0] == 'H' )
         cout <<"Case " << count << ": " << "Hajj-e-Akbar" << endl ;

        else if ( str[0] == 'U' )
         cout <<"Case " << count << ": " << "Hajj-e-Asghar" << endl ;

        count++ ;

    }
}
