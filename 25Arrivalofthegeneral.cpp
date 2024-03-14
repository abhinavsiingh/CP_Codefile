#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max=INT16_MIN;
int min=INT16_MAX;
int k,l;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
        k=i;
    }

}
for(int j=0;j<n;j++){
    if(arr[j]<=min){
        min=arr[j];
        l=j;
    }

}
// for(int a=0;a<n;a++){
//     if(arr[a]>max)
// }
if(k>l){
cout<<k + (n-2-l)<<endl;
}
else{
  cout<<k + (n-1-l)<<endl;  
}
}