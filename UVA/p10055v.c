#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a ,b , c;
    while (scanf("%lf%lf", &a, &b) == 2){
        c = labs (a-b);
        printf("%.0lf\n", c);
    }
}
