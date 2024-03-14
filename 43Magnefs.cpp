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
    int temp=t;
    vector<char> ch;
    int cnt=0;
    
    while(temp--){
        char a,b;
        cin>>a>>b;
        ch.push_back(a);
        ch.push_back(b);
       
        

    }
    for(int i=0;i<ch.size();i++){
            if(ch[i]==ch[i+1])cnt++;
        }
    cout<<cnt+1<<endl;
}