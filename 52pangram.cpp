#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    string s;
    cin>>s;
    set<char> s1;
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
        s1.insert(s[i]);
    }
    
    if(s1.size()==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}