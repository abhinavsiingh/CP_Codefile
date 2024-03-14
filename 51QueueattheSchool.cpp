#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--){
    for(int i=0;i<n;){
        if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);
            i+=2;
    }
    else i++;
    }
}
    cout<<s<<endl;

}