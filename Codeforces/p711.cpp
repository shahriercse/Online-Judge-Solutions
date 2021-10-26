#include<iostream>
#include<vector>
using namespace std ;

int main()
{

    int n ; cin >> n ;
    string str = "OX" ;
    vector <string> arr ;

    for ( int i = 0 ; i < n ; i++ ){
        string x ;cin >> x ;
        arr.push_back(x) ;
    }
    int flag = 0 ;
    int len = arr.size() ;
    for ( int i = 0 ; i < len ; i++ ){

        if ( arr[i][0] == str[0] && arr[i][1] == str[0] && flag == 0 ){
            flag = 1 ;
            arr[i][0] = '+' ;
            arr[i][1] = '+' ;


        }

        if ( arr[i][3] == str[0] && arr[i][4] == str[0] && flag == 0 ){
            flag = 1 ;
            arr[i][3] = '+' ;
            arr[i][4] = '+' ;

        }

    }
    if ( flag ){

        cout << "YES" << endl ;
        for ( int i = 0 ; i < len ; i++ ){

            cout << arr[i] << endl ;
        }
    }

    else cout << "NO" << endl ;

    return 0 ;

}
