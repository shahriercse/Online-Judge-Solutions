#include<iostream>
using namespace std;

int main()
{
    int x, div, n, i;
    cin >> n;
    while(n--){
        int sum = 0 ;
        cin >> x;
        for(int i = 1; i < x; i++ ){
            if( x % i == 0){
                sum += i;
            }
        }

        if( sum == x ) cout << x << " eh perfeito" << endl;
        else cout << x << " nao eh perfeito" << endl;
    }
    return 0;
}
