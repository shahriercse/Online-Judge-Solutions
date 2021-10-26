#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std ;

int main()
{

    int n, x, m ;
    double sum = 0, sum1 = 0, sum2 = 0, sum3 = 0 ;
    char ch ;
    cin >> n ;

    while ( n-- ) {

        cin >> x >> ch ;
        if ( ch == 'C' ) sum1 += x ;
        if ( ch == 'R' ) sum2 += x ;
        if ( ch == 'S' ) sum3 += x ;

        sum += x ;
    }


     cout << "Total: " << sum << " cobaias" << endl ;
     cout << "Total de coelhos: " << sum1 << endl ;
     cout << "Total de ratos: " << sum2 << endl ;
     cout << "Total de sapos: " << sum3 << endl ;


     cout << fixed ;
     cout << setprecision(2) ;
     cout << "Percentual de coelhos: " << (sum1/sum) * 100 << " %" << endl ;
     cout << "Percentual de ratos: " << (sum2/sum) * 100 << " %" << endl ;
     cout << "Percentual de sapos: " << (sum3/sum) * 100 << " %" << endl ;

}
