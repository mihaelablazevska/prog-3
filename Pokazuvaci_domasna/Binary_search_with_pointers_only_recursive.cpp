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
int binary_search_recursive(int *arr, int start, int end, int key)
{
    int mid = (start + end)/2;
    if(start > end)
    {
        return -1;
    }
    else if(key == *(arr+mid))
    {
        return mid;
    }
    else if(key < *(arr+mid))
    {
        return binary_search_recursive(arr, start, mid - 1, key);
    }
    else if(key > *(arr+mid))
    {
        return binary_search_recursive(arr, mid + 1, end, key);
    }
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
    int idx = binary_search_recursive(arr, 0, n-1, key);
    if(idx == -1)
    {
        cout << "Not found";
    }
    else cout << "Found at index: "<< idx;
    return 0;
}