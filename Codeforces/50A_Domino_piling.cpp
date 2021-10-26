#include<bits/stdc++.h>
using namespace std;

int main() {

    int m, n;
    scanf("%d %d", &m, &n);

    int board_size = m * n;

    int res = floor(board_size / 2);

    printf("%d\n", res); 

    return 0;
}