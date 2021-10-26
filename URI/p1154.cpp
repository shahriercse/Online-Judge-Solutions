#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{
    int n;
    double sum = 0 ;
    int count = 0 ;

    while (n > 0){

       cin >> n ;
        if(n > 0){
          sum += n ;
          count++ ;
        }

    }

    printf("%.02lf\n", sum/count) ;

    return 0;
}
