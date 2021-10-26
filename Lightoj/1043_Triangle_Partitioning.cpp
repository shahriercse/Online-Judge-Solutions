#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    double ab, ac, bc, de, ae, ad, s1, ADE, s2, ABC, triangle_ratio, given_ratio;

    int t;

    cin >> t;

    int k = 0;

    while (t--) {
        cin >> ab >> ac >> bc >> given_ratio;

        given_ratio = given_ratio / (given_ratio + 1);

        s2 = (ab + bc + ac) / 2.0;

        ABC = sqrt(s2 * (s2 - ab) * (s2 - bc) * (s2 - ac));

        double lower = 0, upper = bc;

        for (int i = 0; i < 50; i++)  {
            
            de = (lower + upper) / 2.0;

            ad = ab * de / bc;
            ae = ac * de / bc;

            s1 = (ad + de + ae) / 2.0;
            ADE = sqrt(s1 * (s1 - ad) * (s1 - ae) * (s1 - de));

            triangle_ratio = ADE / ABC;

            if (triangle_ratio < given_ratio)
                lower = de;
            else
                upper = de;
        }
        ad = ab * de / bc;

        printf("Case %d: %lf\n", ++k, ad);
    }

    return 0;
}