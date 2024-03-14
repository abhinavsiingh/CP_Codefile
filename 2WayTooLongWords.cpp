#include<bits/stdc++.h>
using namespace std;

    
int main(){
int n;
cin>>n;
while(n--){
    string str;
    cin>>str;
    int len=str.length();
    if(len<=10){
        cout<<str<<endl;
    }
    else{
        int lenbtw=len-2;
        char str1=str[0];
        int j=len-1;
        char str2=str[j];
        cout<<str1<<lenbtw<<str2<<endl;
    }
}
}