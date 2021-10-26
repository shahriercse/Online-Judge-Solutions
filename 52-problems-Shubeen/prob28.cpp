#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, temp;cin >> n;
    int arr[1000];
    for ( int i = 0; i < n; ++i ){
        cin >> arr[i];
    }
    int flag = 1;
    for(int i = 1; i < n; ++i) {
        if(arr[i] < arr[i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;





}
