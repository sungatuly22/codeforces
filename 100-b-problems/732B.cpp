// https://codeforces.com/problemset/problem/732/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, i, a[510], res, k;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> k;
    for (i = 1; i <= n; i++) 
        cin >> a[i];
    for (i = 1; i < n; i++) {
        if (a[i] + a[i+1] < k) {
            res += k - a[i] - a[i + 1];
            a[i+1] = k - a[i];
        }
    }
    cout << res << endl;
    for (i = 1; i <= n; i++) 
        cout << a[i] << " ";
    return 0;
}