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
    set<int> s1;
    for(int i=0;i<s.length();i++){
        s1.insert(s[i]);
    }
    int ans=s1.size();
    
    if(ans%2==0){
        cout<<"CHAT WITH HER!"<<endl;

    }
    else{
        cout<<"IGNORE HIM!"<<endl;

    }
}