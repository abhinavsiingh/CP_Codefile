#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;

    string t="";
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(s[i]!='a' && s[i]!='e' && s[i]!='i'  && s[i]!='o' && s[i]!='u'  && s[i]!='y'){
            t+=s[i];
        }
    }
    for(int i=0;i<t.size();i++){
        cout<<"."<<t[i];
    }
}