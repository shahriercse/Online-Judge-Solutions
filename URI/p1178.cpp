#include<iostream>
#include<cstdio>
using namespace std;

int main(void)
{
    double n;
    cin >> n;
    for(int i = 0; i < 100; i++) {
        printf("N[%d] = %0.4lf\n", i, n);
        n = n / 2;
    }

    return 0;
}
