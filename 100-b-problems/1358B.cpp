// https://codeforces.com/problemset/problem/1358/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, m, i, t, a[200010], res;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> t;
    while (t--) {
        res = 1;
        cin >> n;
        for (i = 1; i <= n; i++) 
            cin >> a[i];
        sort(a + 1, a + n + 1);
        for (i = n; i >= 1; i--) {
            if (i >= a[i]) {
                res = i+1;
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}