#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, res; cin >> a >> b;

    string str[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};

    int max_number = max(a, b);

    cout << str[6 - max_number] << endl;

    return 0;
}
