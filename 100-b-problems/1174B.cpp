// https://codeforces.com/problemset/problem/1174/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, i, a[100010], odd, even;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) 
            even++;
        else
            odd++;
    }
    if (even > 0 && odd > 0) {
        sort(a + 1, a + n + 1);
    }
    for (i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}