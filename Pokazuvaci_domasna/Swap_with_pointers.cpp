#include <iostream>
using namespace std;

void swap_with_pointers(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swap_with_pointers(&a, &b);
    cout << a << " "<< b;
}