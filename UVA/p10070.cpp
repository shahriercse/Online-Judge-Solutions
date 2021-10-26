#include<iostream>
#include<cstdio>
using namespace std ;

int main()
{

    int y ;

    while ( scanf("%d", &y ) == 1 ){

        if ( (y % 4 == 0 && y % 100 != 0) ||  y % 400 == 0 ){

            cout << "This is leap year." << endl ;
        }

        if ( y % 15 == 0 ){

            cout << "This is huluculu festival year." << endl ;
        }


        if ( y % 55 == 0 ){
            cout << "This is bulukulu festival year." << endl ;
        }





    }






}
