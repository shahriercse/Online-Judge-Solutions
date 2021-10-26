//12403
#include<stdio.h>
#include<string.h>
int main()
{
    int T , tk = 0 ,sum = 0;
    char A[40] ;
    scanf("%d" ,&T) ;
    while (T--) {

        scanf("%s" , A);
        if (strcmp(A,"donate") == 0){
             scanf("%d" , &tk) ;
             sum += tk;

        }
        else{
            printf("%d\n", sum) ;


        }

    }





}
