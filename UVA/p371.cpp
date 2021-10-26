//uva 371
#include<iostream>
#include<cstdio>
using namespace std;

int count ( int n )
{
    int c = 0;
    while (n != 1)
    {

        if ( n % 2 == 0 ) n /= 2 ;

        else n = 3 * n + 1 ;

        c++ ;
    }

    return c ;
}

int main()
{
    int a,b ,x,y ,temp,max, k, gn;

    while (scanf("%d%d", &x , &y ) == 2 ){

            if ( x == 0 || y == 0 ) break ;

            max = 0 ;

            a = x ;
            b = y ;

            if (a > b) {

                temp = a;
                a = b ;
                b = temp ;

            }

        for (int i = a ; i <= b ; i++){

             k = count (i) ;

            if (max < k){

                max = k ;
                gn = i ;

            }

        }

          printf("Between %d and %d, %d generates the longest sequence of %d values.\n", a, b, gn, max ) ;



    }


}
