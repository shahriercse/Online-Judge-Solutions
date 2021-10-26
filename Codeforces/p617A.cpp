#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int n;
    double div;
    cin >> n;

    for(int i = 1; i <= 5; i++) {
        div = ceil((n * 1.0) / i);
        arr[i] = div;

        cout << arr[i] << " ";
    }

    cout << endl << endl;

    int min = arr[1];

    for(int i = 1; i <= 5; i++) {
        if(arr[i] < min) min = arr[i];
    }
    cout << min << endl;

    return 0;

}
