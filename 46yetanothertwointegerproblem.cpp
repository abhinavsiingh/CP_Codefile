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
        int a,b;
        cin>>a>>b;
        //case 1
        int cnt=0;
        int i=10;
        if(a==b)cout<<0<<endl;

        //case2
      
        else if(a<b){
            while(a<=b && i>0){
                a=a+i;
                if(a<=b)cnt++;
                else i--;
            }
            cout<<cnt+1<<endl;
        }
        else{
            while(a>=b && i>0){
                a=a-i;
                if(a>=b)cnt++;
                else i--;
            }
            cout<<cnt+1<<endl;
        }
      
    }

        
    
}