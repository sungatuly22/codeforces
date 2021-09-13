// https://codeforces.com/problemset/problem/439/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;

long long n, a[100010], ans, i;
int x;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> x;
    for (i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a+1, a+n+1);
    for (i = 1; i <= n; i++) {
        x = max(x, 1);
        ans += a[i] * x;
        x--;
    }
    cout << ans;
    return 0;
}