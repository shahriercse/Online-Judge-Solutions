#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    vector <ll> luchu_arr, chimps_arr;
    vector <ll>::iterator upper, lower;

    ll num_of_luchu, num_of_chimps, chimps, luchu, pos;

    cin >> num_of_chimps;

    while(num_of_chimps--) {
        cin >> chimps; 
        chimps_arr.push_back(chimps); 
    }

    sort(chimps_arr.begin(), chimps_arr.end());

    cin >> num_of_luchu;

    while(num_of_luchu--) {
        cin >> luchu;

        lower = lower_bound(chimps_arr.begin(), chimps_arr.end(), luchu);

        upper = upper_bound(chimps_arr.begin(), chimps_arr.end(), luchu);

        pos = chimps_arr[lower - chimps_arr.begin() - 1];

        if((upper - chimps_arr.begin()) >= chimps_arr.size()) {
            cout << pos << " X" << endl;
        }
        else if((lower - chimps_arr.begin()) <= 0){
            cout << "X " << * upper << endl;
        }
        else cout << pos << " " << * upper << endl;

    }

    return 0;
}
