#include<bits/stdc++.h>
using namespace std;

long long num, i, x, j;

int fun (long long m)
{
    long long count = 0;

    for(j = 1; j <= m; j++) {
        if(m % j == 0) count++;
    }
    //cout << count << endl;
    if(count == 3) cout << "YES" << endl;

    else cout << "NO" << endl;


}

int main()
{

    freopen("input.txt", "r", stdin);

    cin >> num;

    vector <int> arr;

    for(i = 0; i < num; i++) {
        cin >> x;

        arr.push_back(x);

        fun(arr[i]);


    }

    return 0;
}
