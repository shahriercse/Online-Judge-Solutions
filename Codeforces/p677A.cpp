#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    vector <int> arr ;
    int p, h ;
    cin >> p >> h ;

    for ( int i = 0 ; i < p ; i++ ){

         int x ; cin >> x ;
         arr.push_back(x) ;
    }
    int sum = 0 ;
    for ( int i = 0 ; i < p ; i++ ){

        if ( arr[i] <= h ){

            sum += 1 ;
        }
        else if ( arr[i] >= h ) {

            sum += 2 ;
        }
    }

    cout << sum << endl ;


    return 0 ;
}
