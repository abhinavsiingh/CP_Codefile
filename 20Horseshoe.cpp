#include<bits/stdc++.h>
using namespace std;

    
int main(){
int s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;

vector<int> arr;
arr={s1,s2,s3,s4};

sort(arr.begin(),arr.end());
int count=0;
for(int i=1;i<arr.size();i++){
    if(arr[i]==arr[i-1]){
         count++;
    }
    
}
cout<<count<<endl;
}