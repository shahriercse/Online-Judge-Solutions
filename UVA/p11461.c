//11461
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,m,n,root,k;


    while ( scanf("%d%d", &m,&n) == 2 ){

        if (m == 0 && n == 0){
            break;
        }

    k = 0;
    for (i = m;i<=n; i++){

    root = sqrt(i) ;
    if (root*root == i)
        k++;
    }
    printf("%d\n", k) ;


    }

}
