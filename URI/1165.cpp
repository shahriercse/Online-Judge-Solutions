#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, x; cin >> n;
    while(n--){

        cin >> x;
        int s = sqrt(x);
    int count = 0;
    for( int i = 2; i <= s ; i++ ){
        if( x % i == 0 ){
            count = 1;
            break;
        }
    }
    if( count == 0 )cout << x << " eh primo" << endl;
    else cout << x << " nao eh primo" << endl;


    }
}
