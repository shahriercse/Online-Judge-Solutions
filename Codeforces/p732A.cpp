#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;

    for(int i = 1; i <= 10; i++) {
        if((a * i) % 10 == 0 || (a * i) % 10 == b) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
