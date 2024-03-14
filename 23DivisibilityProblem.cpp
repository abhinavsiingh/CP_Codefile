#include<bits/stdc++.h>
using namespace std;

    
int main(){
int t;
cin>>t;

while(t--){
    int a,b;
    cin>>a>>b;

    if(a%b==0){
        cout<<0<<endl;
    }
    else{
        int q=a/b;
        int nextint=b*(q+1);
        int diff=nextint-a;
        cout<<diff<<endl;
    }
}
}