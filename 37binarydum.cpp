#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int pow(int a,int b){
    if(b==0)return 1;
    else{
        int ans=1;
        while(b--){
         ans=ans*2;
        }
        return ans;
    }
}



string addBinaryString(string a, string b, int n, int m)
{
        int x=0;
        int sum1=0;
        for(int i=a.size()-1;i>=0;i--){
            sum1+=(a[i]-'0')*pow(2,x);
            x++;
        }
        int y=0;
        int sum2=0;
        for(int i=b.size()-1;i>=0;i--){
            sum2+=(b[i]-'0')*pow(2,y);
            y++;
        }
        int finalsum=sum1+sum2;

        int arr[100];
        int i=0;
        while(finalsum!=0){
            arr[i]=finalsum%2;
            // string str1=to_string(rem);
            finalsum=finalsum/2;
            
            
            i++;

        }
        string t="";
        for( i=i-1;i>=0;i--){
        string str=to_string(arr[i]);
         t+=str;
        }
        return t;

    
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str1=addBinaryString("1001","10000",4,5);

    cout<<str1<<endl;
}