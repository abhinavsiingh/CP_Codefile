#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n;
cin>>n;
int arr[n];
bool ans=true;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
      ans=false;
    }
}
if(ans){
    cout<<"EASY"<<endl;
}
else{
    cout<<"HARD"<<endl;
}

}