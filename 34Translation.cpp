#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;

    int i=0,j=s.size()-1;

    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    if(s==t)cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }

    //or
    // reverse(s.begin(),s.end());
    // cout<<(s==t ? "Yes":"No")<<endl;
}