#include <bits/stdc++.h>
using namespace std;
int ka(int a[], int n)
{
    int maxsofar = INT_MIN, maxendinghere = 0;
    for (int i = 0; i < n; i++)
    {
        maxendinghere += a[i];
        if (maxsofar < maxendinghere)
            maxsofar = maxendinghere;
        if (maxendinghere < 0)
            maxendinghere = 0;
    }
    return maxsofar;
}
int main()
{
    //code
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int c = ka(a, n);
        cout << c << endl;
    }
    return 0;
}