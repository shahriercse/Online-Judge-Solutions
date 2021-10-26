#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int arr[100],n ,i,avg,sum,t ,c = 1;

        while (scanf("%d", &n) == 1 ){

            int t = 0 ,sum = 0 ;

        if ( n == 0 ) break ;

            for ( i = 0 ; i < n ; i++ ){

                cin >> arr[i] ;

                t += arr[i] ;
                avg = t / n ;

            }

            for ( i = 0 ; i < n ; i++){

                    if ( arr[i] > avg ){

                    sum += arr[i] - avg ;

                    }

            }

            printf("Set #%d\n",c) ;

            printf("The minimum number of moves is %d.\n",sum) ;

            c++ ;

        }

}
