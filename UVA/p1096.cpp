#include<iostream>

using namespace std ;

int main()
{
    int i, j, k ;
    for ( k = 1 ; k <= 15 ; k++ ){
      for ( j = 7, i = 1 ; j >= 5, i <= k ; j--, i += 2 ){

         cout << i << " " << j << endl ;

    }


    }

}
