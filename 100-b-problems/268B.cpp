// https://codeforces.com/problemset/problem/268/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
long long n, res, i;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n;
    res = n * (n + 1) / 2;
    for (i = 1; i <= n - 2; i++)
        res += i * (i + 1) / 2;
    cout << res;

    return 0;
}