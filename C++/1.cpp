#include <iostream>
using namespace std;
void swap_value(int, int);   //call by value...
void swap_ref(int &, int &); //cal reference...
int main()
{
    int a = 10;
    int b = 20;
    cout << "a : " << a << " b : " << b << endl;
    swap_value(a, b);
    cout << "a : " << a << " b : " << b << endl;

    int c = 10;
    int d = 20;
    cout << "c : " << c << " d : " << d << endl;
    swap_ref(c, d);
    cout << "c : " << c << " d : " << d << endl;

    return 0;
}
void swap_value(int x, int y) //call by value...
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "x : " << x << " y : " << y << endl;
}
void swap_ref(int &u, int &v) //call by reference...
{
    int temp;
    temp = u;
    u = v;
    v = temp;
    cout << "u : " << u << " v : " << v << endl;
}
