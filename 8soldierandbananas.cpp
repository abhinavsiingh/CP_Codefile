#include<bits/stdc++.h>
using namespace std;

    
int main(){
int k,n,w;
cin>>k>>n>>w;
int sum=0;
int x;
for(int i=1;i<=w;i++){
 x=k*i;
 sum+=x;
}
if(sum>n){
    cout<<sum-n<<endl;
}
else{
    cout<<0<<endl;
}
}