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
    int uprcnt=0;
    int lwrcnt=0;
    for(int i=0;i<s.length();i++){
       if(s[i]>=97 && s[i]<=122)lwrcnt++;
       else{ uprcnt++;}
    }
    if(uprcnt>lwrcnt){
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }

    }
    cout<<s<<endl;
}