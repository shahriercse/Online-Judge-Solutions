#include<bits/stdc++.h>
#define PI acos(-1.0)

using namespace std;

int main() {

    // freopen("input.txt", "r", stdin);
    int t; cin >> t;

    double large_redius, small_redius, num_circles;

    int k = 1;
    while(t--) {

        scanf("%lf %lf", &large_redius, &num_circles);

        double theta = PI / num_circles;
        double sin_theta = sin(theta);

        small_redius = (large_redius * sin_theta) / (1 + sin_theta);

        printf("Case %d: %lf\n", k++, small_redius);
    }

    return 0;
}