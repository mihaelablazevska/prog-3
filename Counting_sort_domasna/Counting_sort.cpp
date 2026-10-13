//Counting sort
#include <bits/stdc++.h>
#include <ctime>
using namespace std;

long long int d = 0;

//Функција која најпрво го нао
vector<int> counting_sort(vector<int> &a, int n)
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        d++;
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    vector<int> c(max + 1, 0);
    for(int i = 0; i < n; i ++)
    {
        c[a[i]]++;
        d++;
    }

    vector<int> s(n);
    for(int i = 1; i <= max; i++)
    {
        c[i]+=c[i-1];
        d++;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        s[c[a[i]]-1] = a[i];
        c[a[i]] --;
        d++;
    }
    return s;
}

int main()
{
    srand(time(0));
    int n = 10000;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%(n);
    }

    clock_t start = clock();
    vector<int> s = counting_sort(a, n);
    clock_t end = clock();

    double cpu_time = double(end - start) / CLOCKS_PER_SEC;

    cout <<" Broj na iteracii: "<< d << endl;
    cout << "Potrebno vreme: " << cpu_time << " sekundi" << endl;

    /*for(int i = 0; i < n; i ++)
    {
        cout << s[i] << " ";
    }*/
}