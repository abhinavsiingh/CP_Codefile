#include<bits/stdc++.h>
using namespace std;

    
int main(){
 int arr[4];
 int max=INT16_MIN;
 for(int i=0;i<=3;i++){
    cin>>arr[i];
    if(arr[i]>max){
        max=arr[i];
    }


 }
 for(int i=0;i<=3;i++){
    if(arr[i]==max){
        continue;
    }
    else{
      cout<<max-arr[i]<<" ";
    }
    
 }



}