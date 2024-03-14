#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n;
cin>>n;

int n1;
cin>>n1;
int arr1[n1];
int c1=0;
for(int i=0;i<n1;i++){
    cin>>arr1[i];

}
int n2;
cin>>n2;
int arr2[n2];
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}

int arr3[n1+n2];
int k=0;
for(int i=0;i<n1;i++){
    arr3[k++]=arr1[i];
}
for(int j=0;j<n2;j++){
    arr3[k++]=arr2[j];
}

sort(arr3,arr3+n1+n2);

vector<int> temp;
for(int m=0;m<n1+n2-1;m++){
    if(arr3[m]!=arr3[m+1]){
        temp.push_back(arr3[m]);
    }
}
temp.push_back(arr3[n1+n2-1]);



for(int z=1;z<=n;z++){
  for(int x1=0;x1<temp.size();x1++){
    if(z==temp[x1]){
        c1++;
        break;
    }
  }
}

if(c1==n){
    cout<<"I become the guy."<<endl;
}
else{
    cout<<"Oh, my keyboard!"<<endl;
}
}