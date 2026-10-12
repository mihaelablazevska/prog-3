#include <iostream>
using namespace std;

void bubble_sort(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(*(arr+j)> *(arr+j+1))
            {
                int t = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = t;
            }
        }
    }
}
int binary_search(int *arr, int start, int end, int key)
{
    int mid;
    while(start <= end)
    {
        mid = (start + end)/2;
        if(key == *(arr+mid))
        {
            return mid;
        }
        if(key < *(arr+mid))
        {
            end = mid - 1;
        }
        else if(key > *(arr+mid))
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> *(arr+i);
    }
    cin >> key;
    bubble_sort(arr, n);
    for(int i = 0; i < n; i++)
    {
        cout<< *(arr+i) << " ";
    }
    int idx = binary_search(arr, 0, n-1, key);
    if(idx == -1)
    {
        cout << "Not found";
    }
    else cout << "Found at index: "<< idx;
    return 0;
}