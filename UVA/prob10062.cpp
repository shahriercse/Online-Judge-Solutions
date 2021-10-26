#include <iostream>
#include <cstring>
using namespace std;

int count[127];
int main()
{

    string str;
    int flag = 0;

    while (getline(cin, str))
    {

        if (flag)
            cout << endl;
        else
            flag = 1;

        for (int i = 32; i < 127; i++)
        {

            count[i] = 0;
        }
        int len = str.size();
        for (int i = 0; i < len; i++)
        {

            count[(int)str[i]]++;
        }

        int max = 1;

        for (int i = 32; i < 127; i++)
        {

            if (max < count[i])
                max = count[i];
        }

        for (int i = 1; i <= max; i++)
        {

            for (int j = 127; j >= 32; j--)
            {

                if (count[j] > 0 && count[j] == i)

                    cout << j << " " << count[j] << endl;
            }
        }
    }

    return 0;
}
