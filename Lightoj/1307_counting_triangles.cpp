#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    int cas = 0;

    while(t--) {

        int n; cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) 
            cin >> arr[i];

        sort(arr, arr + n);

        int sum, count = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                sum = arr[i] + arr[j];

                int left = j + 1, right = n;

                while(left < right) {
                    int mid = (left + right) / 2;

                    if(sum <= arr[mid]) {
                        right = mid;
                    }

                    else {
                        count += (mid - left + 1);
                        left = mid + 1;
                    }
                }
            }
        }

        printf("Case %d: %d\n", ++cas, count);
    }

    return 0;
}