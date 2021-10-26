#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[1000];

    cin >> str;
    int len = strlen(str);
    int count = 0;
    for(int i = 1; i < len; ++i) {
        if(str[i] >= 65 && str[i] <= 91) count++;
    }

    if(count == len - 1) {
        for(int i = 0; i < len; ++i) {
            if(str[i] >= 65 && str[i] <= 91) {
                str[i] = 97 + str[i] - 65;
            }
            else if(str[i] >= 97 && str[i] <= 123) {
                str[i] = 65 + str[i] - 97;
            }
        }
    }

    cout << str << endl;

    return 0;
}
