#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y; cin >> n;
    vector <int> home;
    vector <int> guest;

    while(n--) {
        cin >> x >> y;
        home.push_back(x);
        guest.push_back(y);
    }   

    int count = 0;
    for(int i = 0; i < home.size(); i++) {
        for(int j = 0; j < guest.size(); j++) {
            if(home[i] == guest[j]) count++;
        }
    }

    cout << count << endl;

    return 0;
}
