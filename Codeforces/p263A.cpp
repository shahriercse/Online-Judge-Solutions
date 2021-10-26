#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int k = 0;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> k;
            if(k == 1) cout << abs(3 - i) + abs(3 - j);
        }

    }




}
