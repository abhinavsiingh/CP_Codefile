// approach1
// #include<bits/stdc++.h>
// using namespace std;

    
// int main(){
// int t;
// cin>>t;

// while(t--){
//     long long int n;
//     cin>>n;
//     long long int count=0;
//     for(long long int i=1;i<=n;i++){
//       for(long long int j=1;j<=n;j++){
//         if(i+j==n && j>i){
//          count++;
//         }
//       }
//     }
//     cout<<count<<endl;

// }
// }



// approach2
// #include<bits/stdc++.h>
// using namespace std;

    
// int main(){
// int t;
// cin>>t;

// while(t--){
//     long long int n;
//     cin>>n;
//     long long int count=0;
//     for(long long int i=1;i<=n/2;i++){
//         long long j=n-i;
//         if(j>i){
//             count++;        
//       }
//     }
//     cout<<count<<endl;

// }
// }

// approach3
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double n;
    long long int ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        ans=ceil(n/2-1);
        cout<<ans<<endl;
    }
   

}


