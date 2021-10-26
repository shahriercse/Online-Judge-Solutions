#include<iostream>
using namespace std;

int main()
{
    int numOfParticipants, pens, noteBooks;
    cin >> numOfParticipants >> pens >> noteBooks;

    if(pens >= numOfParticipants && noteBooks >= numOfParticipants)
        cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
