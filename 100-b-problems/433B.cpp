// https://codeforces.com/problemset/problem/433/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
long long n, i, t, a[100010], b[100010], type, l, r;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a + 1, a + n + 1);
    for (i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }
    cin >> t;
    while (t--) {
        cin >> type >> l >> r;
        if (type == 1) 
            cout << b[r] - b[l - 1] << endl;
        else 
            cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}