#include<iostream>
using namespace std;

int main()
{
    long long rl, k, cl;
    cin >> rl >> k >> cl;
    int sq1 = rl * rl;
    int sq2 = cl * cl;
    int sum = 0;
    for ( int i = 1; i <= k; i++ ){
        sum += sq2;
    }
    if( sum > sq1 ) cout << "YES" << endl;
    else cout << "NO" << endl;

}
