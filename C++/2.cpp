#include<iostream>
using namespace std;

//return by value...
int return_by_value(int &x)
{
    cout<<"x : "<<x<<" &x : "<<&x<<endl;
    return(x);
}

//return by reference...
int & return_by_ref(int &y)
{
    cout<<"y : "<<y<<" &y : "<<&y<<endl;
    return(y);
}
int main()
{
    int a = 10;
    cout<<"a : "<<a<< " &a : "<<&a<<endl;
    const int &b = return_by_value(a);
    cout<<"b : "<< b<< " &b : "<<&b<<endl;


    int c = 20;
    cout<<"c : "<<c<< " &c : "<<&c<<endl;
    const int &d = return_by_ref(c);
    cout<<"d : "<<d<< " &d : "<<&d<<endl;

    return 0;
}