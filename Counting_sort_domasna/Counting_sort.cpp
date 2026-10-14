//Counting sort
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

long long int d = 0;

//Функција за сортирање
vector<int> counting_sort(vector<int> &a, int n)
{
    int max = 0;
    //Барање максимален елемент
    for(int i = 0; i < n; i++)
    {
        d++;
        if(a[i] > max)
        {
            max = a[i];
        }
    }
 
    //Декларирање на втората низа
    vector<int> c(max + 1, 0);
    //Додекување вредности на секој елемент
    for(int i = 0; i < n; i ++)
    {
        c[a[i]]++;
        d++;
    }

    //Прилагодување на вредностите на втората низа
    for(int i = 1; i <= max; i++)
    {
        c[i]+=c[i-1];
        d++;
    }

    //Декларирање на третата низа
    vector<int> s(n);
    //Пополнување на третата низа, со што се добива сортираната низа
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
    int n = 100;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%(n);
    }

    auto startTime = chrono::steady_clock::now().time_since_epoch();
    vector<int> s = counting_sort(a, n);
    auto time = chrono::steady_clock::now().time_since_epoch() - startTime;

    cout << "Broj na iteracii: " << d << endl;
    cout << "Potrebno vreme: " << time.count() << endl;

    /*for(int i = 0; i < n; i ++)
    {
        cout << s[i] << " ";
    }*/
}