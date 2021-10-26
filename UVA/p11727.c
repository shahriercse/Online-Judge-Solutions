//11727
#include<stdio.h>
int main()
{
    int a,b,c,T,i;
    scanf("%d", &T);
    for (i = 1; i <= T; i++){

            scanf("%d%d%d",  &a,&b,&c);

            if ( (a>b || a>c) && (a<b || a<c) ){

                printf("Case %d: %d\n",i,a);
            }

            if ( (b>a || b>c) && (b<a || b<c) ){

                printf("Case %d: %d\n",i,b);
            }

            if ( (c>b || c>a) && (c<b || c<a) ){

                printf("Case %d: %d\n",i,c);
            }

    }

}
