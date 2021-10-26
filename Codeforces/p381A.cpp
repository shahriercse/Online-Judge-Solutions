#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    vector <int> arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int i = 0, s = 0, d = 0, k = 0, j = arr.size() - 1;

    while(i <= j) {

        int max_arr = arr[0];

        if(arr[i] >= arr[j]) {
            max_arr = arr[i];
            i++;
        }
        else {
            max_arr = arr[j];
            j--;
        }

        if(k % 2 == 0) s += max_arr;
        else d += max_arr;

        k++;
    }

    cout << s << " " << d << endl;

    return 0;
}
