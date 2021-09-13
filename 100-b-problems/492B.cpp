// https://codeforces.com/problemset/problem/492/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;

int n, i;
double l, a[1010], res;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> l;
    for (i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a + 1, a + n + 1);
    a[0] = 0; a[n + 1] = l;
    res = a[1] - a[0];
    for (i = 2; i <= n; i++) {
        if ((a[i] - a[i - 1]) / 2 > res)
            res = (a[i] - a[i - 1]) / 2;
    }
    res = max(res, a[n+1]-a[n]);
    printf("%.9lf",res);
    return 0;
}