#include<iostream>
using namespace std ;

int main()
{
    int x, sum ;
    while(1)
    {
        sum = 0 ;
        cin >> x;
        if ( x == 0 )
            break;
        if( x % 2 != 0 )
            x++;
            for(int i = 0; i < 5; i++ ){
            sum += x ;
            x += 2;
       }
        cout << sum << endl;

    }
    return 0;
}
