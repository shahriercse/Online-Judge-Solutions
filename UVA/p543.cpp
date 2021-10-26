#include<iostream>
#include<cmath>
#include<cstring>
#define size 1000001
char arr[size] ;

using namespace std ;

void sieve()
{
    int i, j ;
    for ( int i = 2 ; i < size ; i++ ){

        arr[i] = 1 ;
    }

    for ( int i = 2 ; i*i <= size ; i++ ){

        if ( arr[i] == 1 ){

            for ( int j = i*i ; j <= size ; j+=i ){

                arr[j] = 0 ;
            }

        }

    }
}

int main()
{

    int n, i, p, q ;
    sieve() ;

    while ( cin >> n ){

          if ( n == 0 ) break ;

         int flag ;
         for ( i = 0 ; i <= n/2 ; i++ ){

             flag = 0 ;

             if ( arr[n-i] && arr[i] ){

                 p = n - i ;
                 q = i ;
                 flag = 1 ;
                 break ;
             }
         }

         if ( flag = 1 )
            cout << n << " = " << q << " + " << p << endl ;
        else cout << "Goldbach's conjecture is wrong." << endl ;
    }
    return 0 ;

}
