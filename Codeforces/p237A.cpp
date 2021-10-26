#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, r, res, pos = 0;
    cin >> k >> r;

    for(int i = 1; i <= 10; i++) {

        res = i * k;
        if((res + r) % 10 == 0 || (res - r) % 10 == 0 || res % 10 == 0) {
            pos = i;
            break;
        }
    }

   cout << pos << endl;

    return 0;
}
