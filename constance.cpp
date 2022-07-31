#include<iostream>
int main()
{
    const int a = 5;
    const int b = 6;
    // or
    enum {c = 5, d = 6 };

    std::cout<<"a = "<<a<<"\nb = "<<b<<"\nc = "<<c<<"\nd = "<<d;

    return 0;
}