#include <bits/stdc++.h>
using namespace std;
#define loop(x, n) for (int x = 0; x < n; ++x)
typedef long long int ll;
int main()
{
    //code
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        loop(i, n)
                cin >>
            a[i];
        int b[n];
        loop(i, n)
            b[i] = 1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i] && b[i] < b[j] + 1)
                    b[i] = b[j] + 1;
            }
        }
        int maxx = 1;
        loop(i, n)
            maxx = max(b[i], maxx);
        cout << maxx << endl;
    }
    return 0;
}