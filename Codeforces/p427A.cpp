#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;
    int num = 0, count = 0;
    while(t--) {
        cin >> n; 

        if(n != -1) num += n;
        else if(num == 0) count++;
        else num--; 
    }

    cout << count << endl;

    return 0;
}
