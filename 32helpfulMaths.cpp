#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    // string s;
    // cin>>s;
    
    // //approach 1: taking all the numbers and then sorting it [1+2+1+3]=1213=1123 and inserting + in them
    // string t="";
    // for(int i=0;i<s.size();i+=2){
    //     t+=s[i];
    // }
    // sort(t.begin(),t.end());
    // cout<<t[0];
    // for(int i=1;i<t.size();i++){
    //     cout<<"+"<<t[i];
    // }

    // // approach2: count the number of 1,2 and 3 and then print them the number of times they occur
    string s;
    cin>>s;

    int c1=0,c2=0,c3=0;

    for(int i=0;i<s.size();i+=2){
        if(s[i]=='1')c1++;
        if(s[i]=='2')c2++;
        if(s[i]=='3')c3++;

    }
    string t="";
    for(int i=0;i<c1;i++)t+="1+";
    
    for(int i=0;i<c2;i++)t+="2+";
    
    for(int i=0;i<c3;i++)t+="3+";
    
    t.pop_back();

    cout<<t<<endl;



}