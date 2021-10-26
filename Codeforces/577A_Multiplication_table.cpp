#include<bits/stdc++.h>
using namespace std;

int main() {

    double size, num; cin >> size >> num;
    int res;

    for(int i = 1; i <= size; i++) {
        res = min(num / i, size);
    }


    return 0;
}