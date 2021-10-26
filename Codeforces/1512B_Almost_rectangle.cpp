#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;

    while(t--) {

        int n, c1, c2, r1, r2; 
        cin >> n;

        char star = '*', dots = '.';

        vector<int> row, col;

        char arr[n][n];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] == star) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }  
        }

        c1 = col[0];
        c2 = col[1];
            
        r1 = row[0];
        r2 = row[1];

        if(c1 == c2) {
           if(c1 == n - 1) {
               c1--;
               c2--;
           }
           else {
               c1++;
               c2++;
           }
           
            arr[r1][c1] = star;
            arr[r2][c2] = star;
        }

        else if(r1 == r2) {
            if(r1 == n - 1) {
                r1--;
                r2--;
            }
            else {
                r1++;
                r2++;
            }

            arr[r1][c1] = star;
            arr[r2][c2] = star;
        }

        else {
            arr[r1][c2] = star;
            arr[r2][c1] = star;
        }



        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }

        row.clear();
        col.clear();
    }

    return 0;
}