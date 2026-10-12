#include <iostream>
using namespace std;

void print_arr(int *arr, int n)
{
    for(int i = 0; i< n; i++)
    {
        cout<<*(arr+i)<< " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }
    print_arr(arr, n);
    return 0;
}