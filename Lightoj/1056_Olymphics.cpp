#include<bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    int t; cin >> t;
    int a, b;

    double diagonal, radius, theta, arc, ratio;

    int cas = 0;

    while(t--) {
        scanf("%d : %d", &a, &b);

        radius = sqrt(a * a + b * b) / 2.0;
        
        theta = acos((2.0 * radius * radius - b * b) / (2.0 * radius * radius));

        arc = radius * theta;

        ratio = 400.0 / ((a + arc) * 2.0);

        cout << a * ratio << b * ratio << endl;
       
        printf("Case %d: %.10lf %.10lf\n", ++cas, a * ratio, b * ratio);
    }

    return 0;
}