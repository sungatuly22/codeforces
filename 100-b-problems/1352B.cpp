// https://codeforces.com/problemset/problem/1352/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, k, x, i, t;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (n - (k - 1) > 0 && (n - (k - 1)) % 2 == 1) {
            x = 1;
        } else if (n - (k - 1) * 2 > 0 && (n - (k - 1) * 2) % 2 == 0) {
            x = 2;
        } else {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (i = 1; i < k; i++)
            cout << x << " ";
        cout << n - (k-1)*x << endl;
    }
    return 0;
}