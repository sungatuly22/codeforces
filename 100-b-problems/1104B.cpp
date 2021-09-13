// https://codeforces.com/problemset/problem/1104/B   <--  link for the task

//133298
#include <bits/stdc++.h>
using namespace std;

int i = 0, res;
string s;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> s;
    while(i < s.size()) {
        if (i + 1 < s.size() && s[i] == s[i + 1]) {
            res++;
            s.erase(i, 2);
            if (i > 0)
                i -= 1;
            continue;
        }
        i++;
    }
    if (res % 2 == 1) 
        cout << "YES";
    else 
        cout << "NO"; 
    return 0;
}