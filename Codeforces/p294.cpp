#include<bits/stdc++.h>
#define MAX 100
using namespace std;


int main()
{   
    freopen("input.txt", "r", stdin);
    int arr[MAX];

    int n; cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int m; cin >> m;
    int j = 0, x, y;
    while(j < m) {
        cin >> x >> y;
        x--;

        if(x != 0) arr[x - 1] += y - 1;
        if(x != n - 1) arr[x + 1] += arr[x] - y;

        arr[x] = 0;
        j++;
    }

    for(int i = 0; i < n; i++) cout << arr[i] << endl;
    


    return 0;
}