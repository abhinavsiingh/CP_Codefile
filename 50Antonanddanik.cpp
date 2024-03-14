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
    int cntA=0;
    int cntB=0;
    for(int i=0;i<n;i++){
     if(s[i]=='A')cntA++;
     else cntB++;
    }
    if(cntA>cntB)cout<<"Anton"<<endl;
    else if(cntA<cntB)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    }
    