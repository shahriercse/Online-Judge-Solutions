#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, res;

    cin >> k >> n >> w;
    int sum = 0;
    for(int i = 1; i <= w; i++) {
        sum += i * k;
    }
    res = sum - n;

    if(res > 0) cout << sum - n << endl;

    else cout << "0" << endl;


    return 0;
}
