#include<bits/stdc++.h>
using namespace std;

char findstring (string key, char ch, string direction) {

    for(int i = 0; i < key.size(); i++) {
        if(key[i] == ch){

            if(direction == "R") {

                return char(key[i - 1]);
            }

            else if(direction == "L") {
                return char(key[i + 1]);
            }

        }
    }
}

int main() {

    string keyline1 = "qwertyuiop";
    string keyline2 = "asdfghjkl;";
    string keyline3 = "zxcvbnm,./";

    string direction, str;

    cin >> direction >> str;

    string output = "";

    for(int i = 0; i < str.size(); i++) {
        char p = findstring(keyline1, str[i], direction);
        output += p;



        char q = findstring(keyline2, str[i], direction);
        output += q;



        char r = findstring(keyline3, str[i], direction);
        output += r;




    }

    cout << output << endl;






    return 0;
}
