// https://codeforces.com/problemset/problem/1245/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;

int t, n, i, a, b, c, sum;
string s, res;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> t;
    while (t--) {
        res = "";
        sum = 0;
        cin >> n;
        cin >> a >> b >> c;
        cin >> s;
        for (i = 0; i < n; i++) {
            if (s[i] == 'R' && b > 0) {
                res += "P"; b--; sum++;
            } else if (s[i] == 'P' && c > 0) {
                res += "S"; c--; sum++;
            } else if (s[i] == 'S' && a > 0) {
                res += "R"; a--; sum++;
            } else
                res += "0";
        }
        if (sum < (n + 1) / 2) {
            cout << "NO" << endl;
            continue;
        } 
        else {
            for (i = 0; i < n; i++) {
                if (res[i] == '0') {
                    if (a > 0) {
                        a--; res[i] = 'R';
                    } else if  (b > 0) {
                        b--; res[i] = 'P';
                    } else if (c > 0) {
                        c--; res[i] = 'S';
                    }
                }
            }
        }
        cout << "YES" << endl << res << endl;
    }
    return 0;
}