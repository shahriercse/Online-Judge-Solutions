#include<iostream>
#include<cstdio>

using namespace std ;

int main()
{
    int a,n,k;
    //freopen( "input.txt", "r", stdin ) ;
    while(scanf("%d %d", &n, &k)==2 && k>1)
    {
        a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        cout << a << endl ;
    }
    return 0;
}
