//11677
#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,a,b,total,H;
    H = (60*24) ;


    while (scanf("%d%d%d%d", &h1,&m1,&h2,&m2)){

        if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0){
            break;
        }

        a = (h1*60)+m1 ;
        b = (h2*60)+m2 ;

        if (b<a){
        b = b + H;

        }
        total = b - a;

        printf("%d\n", total);


    }
}
