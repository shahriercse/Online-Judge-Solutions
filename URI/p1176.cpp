#include<iostream>
using namespace std;

int main()
{
    long long int arr[100];

    arr[0] = 0, arr[1] = 1;
    for(int i = 2; i < 65; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    int n, k;
    cin >> n;
    while(n--) {
        cin >> k;
        cout << "Fib(" << k << ") = " << arr[k] << endl;
    }

    return 0;
}
