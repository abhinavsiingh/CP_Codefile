#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n,k;
cin>>n>>k;
int count=0;

int arr[n];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
int x=arr[k];
for(int i=1;i<=n;i++){
    if(arr[i]>=x && arr[i]>0){
        count++;
    }
}

cout<<count<<endl;

}