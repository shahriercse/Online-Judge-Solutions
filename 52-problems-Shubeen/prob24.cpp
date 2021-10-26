#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    vector <int> arr;
    int t ; cin >> t;
    int n ; cin >> n;

    while(t--){

      for ( int i = 0; i < n; i++ ){
         int x; cin >> x;
         arr.push_back(x);
      }

      for( int i = 1; i < arr.size(); i+=2 ){
        cout << arr[i] << " " ;
      }
    }

    return 0;
}
