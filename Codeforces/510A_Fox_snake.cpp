#include<bits/stdc++.h>
using namespace std;

int main() {

    int a, b;

    cin >> a >> b;

    int count = 0;  

    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            if(i % 2 != 0) {
                cout << "#";
            }

            else {
                if(j == 1) count++;

                if(count % 2 == 0 && j == 1) cout << "#";
                else if(count % 2 != 0 && j == b) cout << "#";

                else cout << ".";
            }

        }
        cout << endl;
    }

    return 0;
}