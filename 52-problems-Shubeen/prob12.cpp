#include<iostream>

using namespace std ;

int main()
{
    int t,n ,rem;
    cin >> t ;

    while (t--)
    {
        long long fact = 1 , i ;

        cin >> n ;
        for (i = 1; i<=n ; i++){

            fact = fact * i ;
        }
         cout << fact ;
        int count = 0 ;

        while (fact > 0){

            rem = fact % 10 ;


            if (rem == 0) count++ ;

            else break ;


            fact = fact / 10 ;
        }

        cout << "\t" << count << endl ;
    }

}
