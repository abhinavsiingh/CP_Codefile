#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n;
cin>>n;
int agree=0;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    
    int count=0;
    if(a&1){
        count++;
    }
    if(b&1){
        count++;
    }
    if(c&1){
        count++;
    }
    if(count>=2){
        agree++;
    }
}

cout<<agree<<endl;
}