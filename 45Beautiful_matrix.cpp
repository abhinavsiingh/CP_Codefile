#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[5][5];
    int k,l;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cin>>arr[i][j];
           if(arr[i][j]==1){
            k=i;
            l=j;
           }
        }
    }
    cout<<abs(k-2)+abs(l-2)<<endl;

}