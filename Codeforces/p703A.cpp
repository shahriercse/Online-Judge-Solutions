#include<iostream>
using namespace std ;

int main()
{

   int n, c1 = 0, c2 = 0, a, b ;
   cin >> n ;

   while ( n-- ) {

        cin >> a >> b ;

        if ( a > b ) c1++ ;
        else if ( a < b ) c2++ ;

   }

   if ( c1 > c2 ) cout << "Mishka" << endl ;
   else if ( c1 < c2 ) cout << "Chris" << endl ;
   else cout << "Friendship is magic!^^" << endl ;




}
