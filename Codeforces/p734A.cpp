#include<iostream>
using namespace std ;

int main()
{
   int n, c1 = 0, c2 = 0 ;

   char str[1000000] ;
   cin >> n ;
   cin >> str ;


   for ( int i = 0 ; i < n ; i++ ){

        if ( str[i] == 'A' ) c1++ ;
        else if ( str[i] == 'D' ) c2++ ;
   }


   if ( c1 > c2 ) cout << "Anton" << endl ;
   else if ( c1 < c2 ) cout << "Danik" << endl ;
   else cout << "Friendship" << endl ;

   return 0 ;

}
