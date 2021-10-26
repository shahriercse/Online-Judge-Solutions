#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a, b, different, same;
    cin >> a >> b;

    if(a < b) different = a;
    else different = b;

    same = abs(a - b) / 2;
    cout << different << " " << same << endl;

    return 0;
}
