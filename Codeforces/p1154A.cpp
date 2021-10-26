#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> arr;

    for(int i = 0; i < 4; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int max = arr[0];
    for(int i = 1; i < 4; i++) {
       if(max < arr[i]) {
          max = arr[i];
       }
    }

    for(int i = 3; i >= 0; i--) {
        if(arr[i] == max) continue;
        cout << max - arr[i] << " ";
    }
    cout << endl;


















    return 0;
}
