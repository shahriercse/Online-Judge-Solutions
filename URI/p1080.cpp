#include<iostream>
using namespace std ;

int main()
{
    int arr[101], pos;

    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 0; i < 100; i++) {

       if(max < arr[i]) {
        max = arr[i];
        pos = i + 1;
       }
    }

    cout << max << endl;
    cout << pos << endl;


    return 0;
}
