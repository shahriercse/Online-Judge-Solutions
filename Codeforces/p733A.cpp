#include<iostream>
using namespace std;

int main()
{
    string str;
    int arr[10000];
    cin >> str;
    int count = 0;
    int len = str.size();
    for(int i = 0; i < len; i++) {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I'
        || str[i] == 'O' || str[i] == 'U') {

            count++;

        }


    }

    cout << count << endl;











}
