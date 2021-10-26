#include<iostream>
#include<cstring>
using namespace std;

int main()
{

   string str, s;
   cin >> str;
   int lower = 0, upper = 0;
   for(int i = 0; i < str.size(); i++) {
       if(islower(str[i])) lower++;
       if(isupper(str[i])) upper++;
   }


    if(lower >= upper) {
        for(int i = 0; i < str.size(); i++) {
            s = tolower(str[i]);
            cout << s;
        }
    }
    else {
        for(int i = 0; i < str.size(); i++) {
            s = toupper(str[i]);
            cout << s;
        }
    }

    return 0;
}

