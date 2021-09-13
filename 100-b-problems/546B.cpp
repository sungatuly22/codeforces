// https://codeforces.com/problemset/problem/546/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, i, a[100010], res;
map <int, bool> was;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (i = 1; i <= n; i++) {
        while(1) {
            if (was[a[i]] == false) {
                was[a[i]] = true;
                break;
            } else {
                res++;
                a[i]++;
            }
        }
    }
    cout << res;
    return 0;
}