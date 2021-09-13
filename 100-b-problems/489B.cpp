// https://codeforces.com/problemset/problem/489/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;

int n, i, m, b[110], a[110], j, res;
map<int, bool > was;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for (i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cin >> m;
    for (i = 1; i <= m; i++) 
        cin >> b[i];
    sort(b + 1, b + m + 1);
    for(i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (abs(a[i] - b[j]) <= 1 && was[j] == false) {
                was[j] = true;
                res++;
                break;
            }
        }
    }
    cout << res;
    return 0;
}