// https://codeforces.com/problemset/problem/1490/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int t;

void solve() {
    int n, c[4], i, a[30010], res = 0, need;
    c[0] = c[1] = c[2] = 0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        c[a[i] % 3]++;
    }
    need = n / 3;
    while(c[0] != need || c[1] != need || c[2] != need) {
        for (i = 0; i <= 2; i++) {
            if (c[i] > need) {
                res += c[i] - need;
                c[(i+1) % 3] += c[i] - need;
                c[i] = need; 
            }
        }
    } 
    cout << res << endl;
} 

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}