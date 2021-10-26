#include<bits/stdc++.h>
using namespace std;
int main() {
  
  vector <int> arr = {100, 20, 10, 5, 1};
  int n; cin >> n;
  
  int i = 0;
  int rem, div = 0;
  while(i < arr.size()) {

    if(n >= arr[i]) {
      
      rem = n % arr[i];
      div += n / arr[i];
      if(rem == 0) break;
      else n = rem;
    }
    i++;
  }

  cout << div << endl;

  return 0;
}
