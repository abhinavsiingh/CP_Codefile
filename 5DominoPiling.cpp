#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n,m;
cin>>n>>m;
int res=m*n;

if(res%2==0){
    cout<<res/2<<endl;
}
else{
    cout<<(res-1)/2<<endl;
}
}