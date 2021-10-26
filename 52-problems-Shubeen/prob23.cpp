#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string str;
    while(n--) {

       cin >> str;
       for( int i = 0; i < str.size(); i++ ){

          if( str[i] >= 'A' && str[i] <= 'Z' )
                 cout << str[i] - 64 ;
          else if( str[i] >= 'a' && str[i] <= 'z' ){
            cout << str[i] - 96;
          }

       }
       cout << endl;


    }
    return 0;
}
