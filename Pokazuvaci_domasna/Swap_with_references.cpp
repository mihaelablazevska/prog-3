#include <iostream>
using namespace std;

void swap_with_references(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap_with_references(a, b);
    cout << a << " "<< b;
}