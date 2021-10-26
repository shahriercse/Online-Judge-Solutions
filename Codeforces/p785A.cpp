#include<iostream>
#include<map>

using namespace std ;

int main()
{

    map <string , int > poly ;

    string name ;
    int n ;

    poly["Icosahedron"] = 20 ;
    poly["Cube"] = 6 ;
    poly["Tetrahedron"] = 4 ;
    poly["Dodecahedron"] = 12 ;
    poly ["Octahedron"] = 8 ;

    cin >> n ;
    int sum = 0 ;

    while ( n-- ){

      cin >> name ;

      sum += poly[name] ;


    }

    cout << sum << endl ;
}
