#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(getline(cin, str)) {

        int count = 0, flag = 1;

        for(int i = 0; i < str.size(); i++) {

            if((str[i] >= 'A' && str[i] <= 'Z')
               || (str[i] >= 'a' && str[i] <= 'z')) {

                if(flag) {
                    count++;
                    flag = 0;
                }

            }

               else flag = 1;
        }

        cout << count << endl;

    }

    return 0;
}
