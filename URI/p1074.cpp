#include<iostream>
using namespace std ;

int main()
{
    int n, x ;
    cin >> n ;
    while ( n-- ){
      cin >> x ;

      if ( x % 2 == 0 && x > 0 )
        cout << "EVEN POSITIVE" << endl ;
      else if ( x % 2 == 0 && x < 0 )
        cout << "EVEN NEGATIVE" << endl ;

      else if ( x % 2 != 0 && x > 0 )
        cout << "ODD POSITIVE" << endl ;
      else if ( x % 2 != 0 && x < 0 )
        cout << "ODD NEGATIVE" << endl ;
      else cout << "NULL" << endl ;


    }
}
