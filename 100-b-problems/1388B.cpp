// https://codeforces.com/problemset/problem/1388/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int t, n, r, i;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> t;
    while (t--) {
        cin >> n;
        r = (n + 3) / 4;
        for (i = 1; i <= n - r; i++)
            cout << 9;
        for (i = 1; i <= r; i++)
            cout << 8;
        cout << endl;
    }

    return 0;
}