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

   n = s.length();
    int cnt=0;

   for(int i=0;i<n;i++){

        if(s[i]==s[i+1]){
        cnt++;
        // s.erase(i,1);
        }
      
   }
   cout<<cnt<<endl;

}