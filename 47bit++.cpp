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
     int ans=0;
    while(n--){
       
        string s ;
        cin>>s;
        string s1= "X++";
        string s2= "++X";
        string s3="X--";
        string s4="--X";
        if(s==s1 || s==s2)ans++;
        else{
            ans--;
        }
        

    }
    cout<<ans<<endl;
}