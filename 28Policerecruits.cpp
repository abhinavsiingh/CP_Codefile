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
    int arr[n];
    int police=0;
    int crime=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            police+=arr[i];
        }
        else{
            if(police<1){
                crime++;
            }
            else{
                police--;
            }
        }
    }
    cout<<crime<<endl;
}