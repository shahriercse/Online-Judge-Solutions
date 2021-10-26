#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    while(t--){
      int sum = 0;
      cin >> n;
      int m = n;
      while(m > 0){

        int rem = m % 10;
        m = m / 10;
        sum += rem * rem * rem;

      }

      if( sum == n ) cout << n << " is an armstrong number!" << endl;
      else cout << n << " is not an armstrong number!" << endl;

    }
    return 0;

}
