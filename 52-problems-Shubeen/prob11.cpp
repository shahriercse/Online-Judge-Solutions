#include<iostream>

using namespace std ;

int main()
{
    int t,n ;
    cin >> t ;

    while (t--)
    {
        long long fact = 1 , i ;

        cin >> n ;
        for (i = 1; i<=n ; i++){

            fact = fact * i ;
        }

        cout << fact << endl ;
    }

}
