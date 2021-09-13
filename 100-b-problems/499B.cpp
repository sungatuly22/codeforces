// https://codeforces.com/problemset/problem/499/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;
     
int n, m, i;
string x, y, z;
map <string, string > was;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> n >> m;
    for (i = 1; i <= m; i++) {
        cin >> x >> y;
        was[x] = y;
    }
    for (i = 1; i <= n; i++) {
        cin >> z;
        if (z.size() > was[z].size()) {
            cout << was[z] << " ";
        } else {
            cout << z << " ";
        }
    }

    return 0;
}