#include<bits/stdc++.h>
using namespace std;

    
int main(){
int t;
cin>>t;

int arr[t];
float sum=0.0,x;
for(int i=0;i<t;i++){
    cin>>arr[t];
    x=(float)arr[t]/100;
    sum+=x;
}
cout<<(sum/t)*100<<endl;
}