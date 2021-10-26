#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> arr;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int max = arr[0], sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        sum += (max - arr[i]);
    }

    cout << sum << endl;

    return 0;
}
