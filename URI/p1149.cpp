#include<iostream>

using namespace std ;

int main(void)
{

    int m, n ;
    cin >> m >> n;
    while ( n <= 0 )
    {
        cin >> n ;
    }
    int sum = 0 ;
    while (n--)
    {

        sum += m ;
        m++ ;
    }

    cout << sum << endl ;

    return 0 ;
}
