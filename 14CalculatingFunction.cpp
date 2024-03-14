// #include<bits/stdc++.h>
// using namespace std;

    
// int main(){
// int n;
// cin>>n;
// int sum=0;
// for(int i=1;i<=n;i++){
//     if(i%2!=0){
//         sum=sum-i;
//     }
//     else{
//         sum=sum+i;
//     }
// }
// cout<<sum<<endl;
// }

// Approach 2

#include <cmath>
#include <iostream>
using namespace std;
 
int main()
{
    long long n, res;
    cin >> n;
    if(n % 2 == 0) 
    res = n / 2;
    else 
    res= ((n + 1) / 2) * (-1);
    cout << res << endl;
    return 0;
}