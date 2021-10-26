#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n, pos = -6, num; cin >> n;

    vector <int> arr;
  
    for(int i = 0; i < n; i++) {
        cin >> num;

        if(num == 1 && pos != -6) 
            arr.push_back(pos);

        pos = num;
    }
    arr.push_back(pos);

    cout << arr.size() << endl;

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }


    return 0;
}