#include<iostream>
using namespace std;

int main(void)
{
    freopen("input.txt", "r", stdin);
    
    int arr[20];

    for(int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
     int m = 0;
    for(int i = 0; i < 15; i++) {
        if(i == 4) m = 0;
        if(arr[i] % 2 == 0) {
            cout << "par[" << m << "] = " << arr[i] << endl;
            
        }
        m++; 
    }

    return 0;
}
