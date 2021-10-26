#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    string str;
    while(t--) {
        cin >> n;
        cin >> str;
        int count = 0, flag = 0;
        int len = str.size();
        for(int i = 0; i < len; i++) {
            if(str[i] == 'A' && str[i + 1] == 'P') {
                str[i + 1] = 'A';
                count++;
                i = 0;
            }

            else flag = 1;
        }


        cout << count << endl;





    }

}
