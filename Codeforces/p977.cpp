#include<iostream>
#include<cstdio>

using namespace std ;

int main()
{
    int k , n;
    //freopen ("input.txt", "r", stdin);
    cin >> n >> k ;
    while (k--){

        if ( n % 10 == 0) n /= 10 ;

        else n-- ;
    }

    cout << n ;





}
