#include<iostream>
using namespace std ;

int main()
{
    double i, j, k, l ;

    for(i = 0; i < 2; i += 0.2) {
        for( j = 1; j < 4; j++) {
            cout << "I=" << i << " " << "J=" << i+j << endl;
        }
    }


    return 0;
}
