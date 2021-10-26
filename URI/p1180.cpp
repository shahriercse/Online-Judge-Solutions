#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> arr;
    int n;
    cin >> n;
    for(int i = 0;i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int min = arr[0], pos;
    for(int i = 0; i < n; i++){
        if(min > arr[i]) {
            min = arr[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;
}
