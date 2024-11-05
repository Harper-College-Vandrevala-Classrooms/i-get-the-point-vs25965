#include "Point.h"
#include <iostream>
using namespace std;

int main()
{

    cout << "\nFirst set tested: (3.2, 9.8) -- (5.5, -1.2)" << endl;
    //first set compared
    Point a (3.2, 9.8);
    Point b (5.5, -1.2);
    
    bool equal = a == b;
    bool unequal = a != b;
    cout << "\nEqual ?: " << equal << endl;
    cout << "Unqual ?: " << unequal << endl;
    cout << "The distance between two points: "<<a.distance(b);
    a.midpoint(b);
    
    //compare a different set 
    cout << "\nSecond set tested: (2,2) -- (2,2)" << endl;
    Point c (2, 2);
    Point d(2, 2);
    bool equal2 = c == d;
    bool unequal2 = c != d;
    cout << "\nEqual ?: " << equal2 << endl;
    cout << "Unqual ?: " << unequal2 << endl;
    cout << "The distance between two points: " << c.distance(d);
    c.midpoint(d);


    return 0;

}
