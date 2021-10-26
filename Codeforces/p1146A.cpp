#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   string str;
   cin >> str;
   int len = str.size();

   long long count = 0;
   for(int i = 0; i < len; i++) {
     if(str[i] == 'a') count++;
   }

   int l = 2 * count - 1;
   if(l < len) cout << l << endl;
   else cout << len << endl;
   return 0;

}
