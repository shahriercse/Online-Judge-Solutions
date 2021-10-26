#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,a,b,i,s,k = 1;
    cin >> t;
    while(t--){
        s = 0;
        cin >> a >> b ;
        for (i = a ; i <= b; i++){
            if (i % 2 == 0){
                continue;
            }

            s += i;

        }
        printf("Case %d: %d\n",k,s);

         k++ ;

    }
}
