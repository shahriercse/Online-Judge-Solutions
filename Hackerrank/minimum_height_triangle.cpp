#include <bits/stdc++.h>
using namespace std;

int main()
{
    int base, area;
    double height;

    cin >> base >> area;

    height = double(area / (.5 * base));

    int resHeight = ceil(height);

    cout << resHeight << endl;

    return 0;
}