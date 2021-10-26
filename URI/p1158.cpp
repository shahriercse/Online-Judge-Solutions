#include<iostream>
using namespace std ;

int main()
{
    int n, x, y, sum;
    cin >> n ;
    while (n--){
      cin >> x >> y ;
      if ( x % 2 != 0 ){
        sum = 0 ;
        while (y--){
            sum += x ;
            x += 2 ;
        }
        cout << sum << endl ;
      }
      else{
        x++ ;
        sum = 0 ;
        while (y--){
            sum += x ;
            x += 2 ;
        }
        cout << sum << endl ;
      }


    }
}
