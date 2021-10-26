#include<iostream>
using namespace std;

int main()
{
    int n, b, p, f, h, c, priceOfChickenBurger, priceOfHamBurger, res;
    cin >> n;

    while(n--) {
        cin >> b >> p >> f >> h >> c;

        if(h < c) {
            if(b > f * 2) {
                priceOfChickenBurger = c * f;
                b = b - f * 2;
            }

            else {
                priceOfChickenBurger = (b / 2) * c;
                b = b - (b / 2);
            }

            if(b > p * 2) {
                priceOfHamBurger = h * p;
                b = b - (p * 2);

            }
            else {
                priceOfHamBurger = (b / 2) * h;
                b = b - (b / 2);
            }

        }

        else {

            if(b > p * 2) {
                priceOfHamBurger = h * p;
                b = b - (p * 2);

            }
            else {
                priceOfHamBurger = (b / 2) * h;
                b = b - (b / 2);
            }

            if(b > f * 2) {
                priceOfChickenBurger = c * f;
                b = b - f * 2;
            }

            else {
                priceOfChickenBurger = (b / 2) * c;
                b = b - (b / 2);
            }

        }

        res = priceOfChickenBurger + priceOfHamBurger;

        cout << res << endl;

    }

    return 0;
}
