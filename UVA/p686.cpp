#include <iostream>
#include <cmath>
#include <cstring>
#define size 100001
bool arr[size];

using namespace std;

void sieve()
{
    int i, j, root;
    for (int i = 2; i < size; i++)
    {

        arr[i] = true;
    }
    root = sqrt(size);
    for (int i = 2; i < root; i++)
    {

        if (arr[i] == true)
        {

            for (int j = 2; i * j <= size; j++)
            {

                arr[i * j] = false;
            }
        }
    }
}

int main()
{

    int n, i;
    sieve();

    while (cin >> n)
    {

        if (n == 0)
            break;

        int count = 0;
        for (int i = 0; i <= n / 2; i++)
        {

            if (arr[i] && arr[n - i])
            {

                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
