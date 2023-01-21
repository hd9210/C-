#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back

int partition(int a[], int p, int q)
{
    int x = a[p]; //pivot element.
    int i = p;
    for (int j = p + 1; j < q; j++)
    {
        if (a[j] <= x)
        {
            i++;

            swap(a[i], a[j]);
        }
    }
    swap(a[p], a[i]);

    return i;
}

void qs(int a[], int p, int q)
{
    if (p < q)
    {   int m = partition(a, p, q);
        qs(a, p, m - 1 );
        qs(a, m + 1, q);
    }

}

int main()
{
#ifndef online_judge
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int p = 0, q;
    cin >> q;
    int a[q];
    for (int i = 0; i < q; i++) {cin >> a[i];}
    qs(a, p, q);
    for (int i = 0; i < q; i++) {cout << a[i] << " ";} cout << endl;
    return 0;
}



