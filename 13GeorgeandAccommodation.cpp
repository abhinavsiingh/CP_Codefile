#include<bits/stdc++.h>
using namespace std;

    
int main(){
int t;
cin>>t;
int count=0;
while(t--){
    int a,b;
    cin>>a>>b;

    if((b-a)>1){
        count++;
    }
}
cout<<count<<endl;
}