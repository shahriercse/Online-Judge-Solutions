#include<iostream>
#include<iomanip>
using namespace std ;

int main()
{
    int n ;
    double x, y, z, sum, avg ;

    cin >> n ;

    while ( n-- ){

      cin >> x >> y >> z ;
      sum = (x * 2) + (y * 3) + (z * 5) ;
      avg = sum/10.0 ;
      cout << fixed ;
      cout << setprecision(1);
      cout << avg << endl ;

    }
}
