#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;

    // s1 and s2 are of same size 

    for(int i=0;i<s1.size();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);

    }

    if(s1<s2){
        cout<<-1<<endl;
        }
    else if(s1>s2){
        cout<<1<<endl;
        }
    else{
        cout<<0<<endl;
    }
    
    
}