// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long
// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// signed main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         int sum=0;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
            
//         }
        

//         int ans=-1;
//         for(int i=1;i<=n;i++){
//             if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
//                 ans=i+1;
//             }
//         }
//         if(arr[0]!=arr[1] && arr[1]==arr[2]){
//             cout<<1<<endl;
//         }
//         else{
//         cout<<ans<<endl;}

            
//         }
//     }

// approach 2
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=mp[arr[i]]+1;
        }
        int num=-1;
        int ans=-1;
        for(auto it:mp){
            if(it.second==1){
               num=it.first;
            }
        }
        for(int j=0;j<n;j++){
            if(arr[j]==num){
               ans=j;
               break;
            }
        }
        cout<<ans+1<<endl;
    }
}

    

