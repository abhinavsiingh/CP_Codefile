#include<bits/stdc++.h>
using namespace std;

    
int main(){
int t;
cin>>t;
vector<int> arr;
while(t--){
    int a,b;
    cin>>a>>b;
    arr.push_back(a);
    arr.push_back(b);


}
int count=0;
for(int i=0,j=1;i<arr.size();i+=2,j+=2){
  for(int k=i+2,l=j+2;l<arr.size();k+=2,l+=2){
       if(arr[j]==arr[k]){
        count++;
       }
       if(arr[i]==arr[l]){
        count++;
       }

  }
}
cout<<count<<endl;
}