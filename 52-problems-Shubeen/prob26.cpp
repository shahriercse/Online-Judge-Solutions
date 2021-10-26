#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    double x;
    while(n--){
        cin >> x;
        int count = 0;
        while(x >= 1.0){
            x = x / 2;
            count++;
        }
        cout << count << " days" << endl;
    }
}
