// https://codeforces.com/problemset/problem/474/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
long long n, m, x, i, a[100010], l, r, mid;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    cin >> m;
    for (i = 1; i <= m; i++) {
        l = 1;
        r = n;
        cin >> x;
        while(l <= r) {
            mid = (l + r) / 2;
            if (a[mid] >= x && a[mid - 1] < x) {
                break;
            } else if (a[mid] < x) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << mid << endl;
    }

    return 0;
}