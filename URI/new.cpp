#include<iostream>
using namespace std ;

int main()
{
   int m, n, rem ;
   cin >> n ;

   while (n--){

      cin >> m ;
      rem = m % 10 ;
      m = m / 10 ;
      if ( rem == m ) continue ;

      cout << rem << " " << m << endl ;
   }
}
