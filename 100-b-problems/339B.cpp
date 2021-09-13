// https://codeforces.com/problemset/problem/339/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
long long n, m, last, x, i, res;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> m;
    last = 1;
    for (i = 1; i <= m; i++) {
        cin >> x;
        if (last <= x) {
            res += x - last;
        } else {
            res += (n - last) + x;
        }
        last = x;
    }
    cout << res;

    return 0;
}