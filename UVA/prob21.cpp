#include<iostream>

using namespace std ;

int main()
{
    int t ;
    string str ;
    cin >> t ;

    while (t--) {
      fflush(stdin) ;
      getline ( cin, str ) ;

      for ( int i = str.size() - 1 ; i >= 0 ; i-- ){

            cout << str[i] ;

      }
      cout << endl ;

    }

    return 0 ;

}
