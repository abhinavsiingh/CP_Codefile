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
        int floor=1;
        if(a==1 || a==2)cout<<1<<endl;
        
        else{
            for(int i=3;i<=a;){
                while(i<i+b){
                    if(i==a){
                        floor++;
                        break;
                    }
                    i++;
                }
            }
        }
    }
}