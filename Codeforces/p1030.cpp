#include<iostream>

using namespace std ;

int main()
{
     int n , i , arr[110],max ;
     cin >> n ;

      max = 0 ;
     for ( i = 1 ; i <= n ; i++){

        cin >> arr[i] ;



        if ( max < arr[i] )

             max = arr[i] ;

     }

       if ( max == 1){
        cout << "HARD" << endl ;
       }
       if (max == 0){

            cout << "EASY" << endl ;
       }

       return 0 ;
}
