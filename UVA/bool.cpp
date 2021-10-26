#include <bits/stdc++.h>
using namespace std;

bool marks[32770];
void sieve(int n)
{
    memset(marks, true, 32770);
    marks[0] = marks[1] = false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (marks[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                marks[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    sieve(32768);
    int n, p, q;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int flag;
        for (int i = 2; i <= n / 2; ++i)
        {
            flag = 0;
            if (marks[i] && marks[n - i])
            {

                p = n - i;
                q = i;
                flag = 1;
                break;
            }
        }
        cout << n << " = " << q << " + " << p << endl;
    }

    return 0;
}
