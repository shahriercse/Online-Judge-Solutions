#include<iostream>
using namespace std;

int main()
{
   int arr[20];

   for(int i = 0; i < 20; i++) {
        cin >> arr[i];
   }

   for(int i = 19, j = 0; i > 0, j < 20; i--, j++) {
        cout << "N[" << j << "] = " << arr[i] << endl;
   }


    return 0;
}
