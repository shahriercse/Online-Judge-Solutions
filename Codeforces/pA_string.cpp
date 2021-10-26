#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std ;

int main()
{

   char str[10000] ;

    cin >> str ;

    int len = strlen(str) ;

    for ( int i = 0 ; i < len ; i++ ){


        if ( str[i] != 'a' && str[i] != 'A' && str[i] != 'e' &&
             str[i] != 'E' && str[i] != 'i' && str[i] != 'I' &&
             str[i] !='o' && str[i]!='O' && str[i] != 'u' &&
             str[i] != 'U' && str[i] != 'Y' && str[i] != 'y' )

        {
             if ( str[i] <= 'Z' ) str[i] += 32 ;
                printf(".%c", str[i]) ;


        }

    }










}

