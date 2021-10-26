#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;

int main()
{
    string str ;
    long count = 0, i, len ;
    while ( getline ( cin, str )) {

        len = str.size() ;
        for ( int i = 0 ; i < len ; i++ ){

                if ( str[i] == '"' ) {
                      count++ ;

                      if ( count % 2 == 1 ) cout << "``" ;

                      else cout << "''" ;
                }

                else printf("%c", str[i] ) ;



        }
        cout << endl ;
    }


}
