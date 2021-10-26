#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;

int main()
{
    string str ;

    while ( getline( cin, str ) ){

            int len = str.size() ;

        for ( int i = 0 ; i < len ; i++ ){

               printf("%c", str[i] - 7 ) ;
        }

        cout << endl ;

    }
}
