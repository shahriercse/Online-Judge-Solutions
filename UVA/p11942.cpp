#include<iostream>
using namespace std;

int main()
{
    int n, t, temp, arr[11];

    cin >> t;
    int flag1, flag2;
    cout << "Lumberjacks:" << endl;
    while(t--) {

        flag1 = flag2 = 0;

        for(int i = 0; i < 10; i++) {

            cin >> arr[i];
        }

        for(int i = 0; i < 9; i++) {
            if(arr[i] < arr[i + 1]) flag1 = 1;

            else flag2 = 1;
        }

        if(flag1 && flag2) cout << "Unordered" << endl;

        else cout << "Ordered" << endl;

    }

    return 0;
}
