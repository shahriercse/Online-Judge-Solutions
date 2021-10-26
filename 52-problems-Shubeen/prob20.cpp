#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std ;

int main()
{
    int n;
    char str[1000];
    char *token;
    cin >> n;

    while (n--){

        fflush(stdin);

        gets( str );
        int count = 0;
        token = strtok (str, "!;:,?. ");

        while (token != NULL) {

                if (strlen(token) > 0) count++;

                token = strtok(NULL, "!;:,?. ");

        }

             cout << count << endl;

    }


}
