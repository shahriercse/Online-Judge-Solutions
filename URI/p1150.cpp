#include<iostream>
using namespace std ;

int main()
{
      int x, y ;

      cin >> x >> y ;

      while (y <= x){

        cin >> y ;

      }
      int sum= 0, count = 0 ;

      while(sum <= y){

            sum += x ;
            x++ ;
            count++ ;
      }
      cout << count << endl ;


    return 0 ;
}
