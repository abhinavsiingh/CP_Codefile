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
    string s1="I hate";
    string s2="that";
    string s3="I love";
    string s4="it";
    string ans=" ";
    if(n==1)cout<<s1 + " "<<s4<<endl;
    else{
    for(int i=1;i<=n-1;i++){
     if(i%2!=0){
     ans+=s1;
     ans+=" ";
     ans+=s2;
     ans+=" ";
     }
      else{
     ans+=s3;
     ans+=" ";
     ans+=s2;
     ans+=" ";
      }

    }
    if(n%2!=0){
      ans+=s1;
      ans+=" ";
      ans+=s4;
    }
    else {
      ans+=s3;
      ans+=" ";
      ans+=s4;
    }
    cout<<ans<<endl;
}

}