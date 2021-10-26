#include<bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c; cin >> a >> b >> c;

    vector <int> arr;
    vector <int>::iterator it;

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    sort(arr.begin(), arr.end());

    int first = *arr.begin();
    int middle = *(arr.begin() + 1);
    int last = *(arr.begin() + 2);

    int res = abs(middle - last) + abs(middle - first);

    cout << res << endl;

    return 0;
}