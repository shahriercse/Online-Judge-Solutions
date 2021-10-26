#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, b, d, num, sum = 0, count = 0;

    cin >> n >> b >> d;

    for(int i = 0; i < n; i++) {
        cin >> num;

        if(num > b) continue;

        else {
            sum += num;

            if(sum > d) {count++; sum = 0;}
        }
    }
    cout << count << endl;

    return 0;
}
