#include<iostream>
using namespace std ;

int main()
{
    int x, temp ;
    cin >> x ;
    int arr[110] ;

    for ( int i = 1 ; i <= x ; i++ ){

        cin >> temp ;
        arr[temp] = i ;
    }

    for ( int i = 1 ; i <= x ; i++ ){

        cout << arr[i] << " " ;

    }

    return 0 ;
}
