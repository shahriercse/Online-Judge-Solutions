#include<iostream>
#include <cstdio>

using namespace std ;

int main() {
    int i, j, t, n, p, count, arr[101] ;

    cin >> t ;

    while (t--) {

        cin >> n >> p;

        for ( i = 0 ; i < p ; i++ ) {
            cin >> arr[i];
        }
        count = 0 ;
        for ( i = 1; i <= n ; i++) {

            if ( i % 7 != 6 && i % 7 != 0 ) {

                for ( j = 0 ; j < p ; j++ ) {

                    if ( i % arr[j] == 0 ) {

                        count++ ;
                        break;
                    }
                }
            }
        }

        cout << count << endl ;
    }

    return 0 ;
}
