#include<bits/stdc++.h>
using namespace std;

    
int main(){
long long n;
cin>>n;

long long temp=n;
int count=0;
while(temp!=0){
    int rem =temp%10;
    temp=temp/10;
    if(rem==4  || rem==7){
        count++;
    }
}
if(count==4 || count==7){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}