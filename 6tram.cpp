#include<bits/stdc++.h>
using namespace std;

    
int main(){
int t;
cin>>t;
 int cursum=0;
 vector<int> arr;
while(t--){
   int a,b;
   cin>>a>>b;
  
   cursum=cursum-a + b;
   arr.push_back(cursum);
}
int max=INT16_MIN;
for(int i=0;i<arr.size();i++){
  if(arr[i]>max){
    max=arr[i];
  }

}

cout<<max<<endl;
}