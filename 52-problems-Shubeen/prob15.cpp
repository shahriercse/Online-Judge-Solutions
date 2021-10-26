#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int count[10000];

int main()
{

    int t ;
    string str ;
    cin >> t ;

    while (t--) {

        fflush(stdin) ;
        getline( cin, str ) ;

        for ( int i = 0 ; i < 26 ; i++ ){

            count[i] = 0 ;
        }

        for ( int i = 0 ; i < str.size(); i++ ){

            if ( str[i] >= 'a' && str[i] <= 'z' ){

               count [ str[i]- 'a' ]++ ;

            }
        }

        for ( int i = 0 ; i < 26 ; i++ ){

            if ( count[i] != 0 )

                printf("%c = %d\n", 'a' + i, count[i] ) ;

        }

    }


}
