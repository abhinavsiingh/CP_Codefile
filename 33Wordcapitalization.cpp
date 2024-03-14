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
    if(s[0]>=97){
      s[0]=s[0]-'a' + 'A';
      cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }

    // or 
    // s[0]=toupper(s[0]);


    
}