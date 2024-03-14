#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

 int solve(int n){
    
    
     int count=0;
     while(n!=1){

        if (n % 3 != 0) {
                return -1;
                break;
            }
         if (n % 6 == 0) n /= 6;
            else n *= 2;
            count++;
        
     
    }
    if(n==1)return count;
    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ans=solve(n);
        cout<<ans<<endl;

    }
}