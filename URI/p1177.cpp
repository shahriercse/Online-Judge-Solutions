#include<iostream>
using namespace std;

int main()
{
    int n, j = 0, i = 0;
    cin >> n;
    for(int j = 0, i = 0; j < 3, i < 1001; j++,i++ ){
            if(j == n)
              j = 0;

        cout << "N[" << i << "] = " << j << endl;
    }

    return 0;
}
