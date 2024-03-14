//used set here to to store unique elements here
//& map to store the frequency of each element

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
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int> mp;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            s.insert(arr[i]);

        }
        

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        
        
        int count1=0,count2=0;
        int num=0;

        for(auto x:mp){
            int freq=x.second;
            num=max(num,freq);

        }
        int team1=s.size();
        int team2=num;
        if(team1<team2)cout<<team1<<endl;
        else if(team1>team2)cout<<team2<<endl;
        else cout<<team1-1<<endl;
       


    }
}