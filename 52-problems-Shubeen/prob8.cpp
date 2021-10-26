#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,t,temp,i=1;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c ;

        if ( a > b ){
            temp = a;
            a = b;
            b = temp;

        }

        if ( a > c ){
            temp = a;
            a = c;
            c = temp;

        }

        if ( b > c ){
            temp = b;
            b = c;
            c = temp;
        }
        printf("Case %d: ",i) ;

        cout << a << " " << b << " " << c << endl ;

        i++ ;

    }



}
