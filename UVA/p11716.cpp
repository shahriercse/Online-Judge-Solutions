#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std ;
int main()
{
    int i,j,k,l,t,s1;

    float s2;
    char arr[100000];

     while( scanf("%d",&t) == 1 ){

      scanf( "\r" ) ;

      for( i = 0 ; i < t ; i++ ){

         gets(arr) ;
         l = strlen(arr) ;

         s2 = sqrt(l) ;

         s1 = sqrt(l) ;

           if( s1 == s2 ){

             for( j = 0 ; j < s1 ; j++ )

              for( k = j ; k < l ; k += s1 )

                 printf( "%c", arr[k] ) ;
           }

           else
                printf( "INVALID" ) ;
                printf( "\n" ) ;

      }
    }
}
