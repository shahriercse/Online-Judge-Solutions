#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std ;

int main()
{
    char str[7] ;
    int n, i ;
    cin >> n ;
    while ( n-- ){

        cin >> str ;

        if ( strlen(str) == 5 ) cout << "3" << endl ;

        else if ( (str[0] == 'o' && str[1] == 'n' ) ||

                  (str[0] == 'o' && str[1] == 'e' ) ||
                  (str[1] == 'n' && str[2] == 'e' ) ||

                  (str[0] == 'o' && str[2] == 'n' ) ||

                  (str[0] == 'o' && str[2] == 'e' ) )
                  cout << "1" << endl ;

        else cout << "2" << endl ;

    }
}
