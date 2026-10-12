#include <iostream>
using namespace std;

void bubble_sort(int *arr, int n)
{
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < n - i - 1; j++)
       {
           if(*(arr+j+1) < *(arr+j))
           {
               int t = *(arr+j);
               *(arr+j) = *(arr+j+1);
               *(arr+j+1) = t;
           }
       }
   }
}

void print_arr(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << *(arr+i)<< " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> *(arr+i);
    }
    bubble_sort(arr, n);
    print_arr(arr, n);
    return 0;
}