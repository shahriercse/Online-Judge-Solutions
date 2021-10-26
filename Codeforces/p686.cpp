#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, p;
    cin >> n >> x;

    vector <char> operation;
    vector <long long> packs;

    char c;

    while(n--) {
        cin >> c >> p;
        operation.push_back(c);
        packs.push_back(p);
    }

    long long len = operation.size();
    long long sum = x; int count = 0;

    for(int i = 0; i < len; i++) {
        if(operation[i] == '+') {
            sum += packs[i];
        }

        else if(operation[i] == '-') {
            if(sum >= packs[i]) sum -= packs[i];
            else count++;
        }
    }

    cout << sum << " " << count << endl;

    return 0;
}