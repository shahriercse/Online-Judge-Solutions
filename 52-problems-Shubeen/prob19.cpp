#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std ;

int main()
{
    int t ;
    string str ;

    cin >> t ;

    while ( t-- ){
        fflush(stdin) ;
        getline( cin , str ) ;

        int count = 1 ;
        for ( int i = 0 ; i < str.size() ; i++ ){

            if ( str[i] == ' ' ) count++;

        }

        cout << "Count = " << count << endl ;

    }
}
