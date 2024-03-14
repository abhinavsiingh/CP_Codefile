#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        vector<int> v={a,b,c,d};
        int ans=0;
        for(int i=1;i<v.size();i++){
          if(v[i]>v[0]){
            ans++;
          }
        }  
        cout<<ans<<endl;      
    }
}