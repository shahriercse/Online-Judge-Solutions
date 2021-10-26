#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    char str[10000];
    char *token;

    while(n--) {
        int count = 0;
        scanf(" %[^\n]", str);

        token = strtok(str, " ");

        while(token != NULL) {
            if(strlen(token) > 0) count++;

            token = strtok(NULL, " ");
        }

        int res = count * (count - 1);

        cout << 1 << "/" << res << endl;

    }

    return 0;
}
