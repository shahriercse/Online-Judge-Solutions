#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t;
    cin >> t;
    while(t--){
        cin >> n;
        for ( i = 1; i <= n; i++ ){
                cout << endl ;

            for ( j = 1; j <= n; j++){
                cout << "*" ;
            }
        }


                cout << endl;
    }

    return 0;
}
