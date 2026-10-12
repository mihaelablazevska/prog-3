//NZD(Evklidov algoritam)
#include <iostream>
using namespace std;

long long NZD(int a, int b)
{
    if(a%b == 0) return b;
    return NZD(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << NZD(a, b);
    return 0;
}