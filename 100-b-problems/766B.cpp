// https://codeforces.com/problemset/problem/766/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, i, a[100010];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for (i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (i = 1; i <= n - 2; i++) {
        if (a[i] + a[i + 1] > a[i + 2] && a[i] + a[i + 2] > a[i + 1] && a[i + 1] + a[i + 2] > a[i]) {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
    return 0;
}