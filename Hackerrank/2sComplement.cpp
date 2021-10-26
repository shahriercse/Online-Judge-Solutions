#include <bits/stdc++.h>
using namespace std;

int subtract_2s_complement(int x, int y)
{
    int z;

    z = x + (~y + 1);

    return z;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout << subtract_2s_complement(a, b);

    return 0;
}