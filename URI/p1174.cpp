#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n;
    for (int i = 0; i < 100; i++ ){
        cin >> n;
        if( n <= 10.0 ){
            cout << fixed;
            cout << setprecision(1);
            cout << "A[" << i << "] = " << n << endl;
        }
    }
}
