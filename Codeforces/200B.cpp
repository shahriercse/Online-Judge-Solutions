#include<iostream>
#include<vector>
#include<iomanip>

using namespace std ;

int main()
{

    int  n ;
    vector <int> arr ;
    cin >> n ;

    for ( int i = 0 ; i < n ; i++ ){

         int x ; cin >> x;
         arr.push_back (x);
    }
    double sum = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
          sum += arr[i];
    }

    double avg = (sum / n) * 1.0;

    cout << fixed ;
    cout << setprecision(12);
    cout << avg << endl;

   return 0 ;
}
