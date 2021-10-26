#include<iostream>
using namespace std;

int main()
{
    long long n, r, g, b;

    cin >> n;

    while(n--) {
        cin >> r >> g >> b;

        if(r == g && g == b)
            cout << "Yes" << endl;

        else if(r == g + b + 1 || r == g + b - 1
                || g == r + b + 1 || g == r + b - 1
                || b == r + g + 1 || b == r + g - 1)
            cout << "Yes" << endl;
        else if(r == g + b || g == r + b || b == r + g)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}
