// https://codeforces.com/problemset/problem/285/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;

map<int, bool> was; 
int n, i, a[100010], res, s, t;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> s >> t;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    while (1) {
        if (a[s] == t)
            break;
        if (was[s] == true) 
            cout << -1, exit(0);
        res++;
        was[s] = true;
        s = a[s];
    }
    cout << res;
    return 0;
}