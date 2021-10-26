#include<iostream>
#include<vector>
using namespace std ;

int main()
{

      string s;
      cin >> s;

      vector <string> str(5);

      for ( int i = 0 ; i < str.size(); i++ ){
            cin >> str[i];
      }

        bool flag = false;
        for ( int i = 0 ; i < str.size(); i++ ){

            if( str[i][0] == s[0] || str[i][1] == s[1] ){
                flag = true;
            }
      }

      if (flag) cout << "Yes" << endl;
      else cout << "No" << endl;

}
