#include<bits/stdc++.h>
using namespace std;

    
int main(){
int x;
cin>>x;
int rem=x%5;
if(x<=5){
    cout<<1<<endl;
}

else if (rem==0){
  cout<<x/5<<endl;
}
else{
    cout<<x/5 + 1 <<endl;
    }
   

}