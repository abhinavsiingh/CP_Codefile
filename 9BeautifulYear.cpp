#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
   

    for (int i = y + 1; i <= 10000; i++)
    {  
        vector<int> arr;
        int temp= i;
        while (temp != 0)
        {

            int rem = temp % 10;
            temp = temp / 10;
            arr.push_back(rem);
           
        }
        
        bool distinct=true;
        sort(arr.begin(),arr.end());
        for(int k=1;k<arr.size();k++){
            if(arr[k]==arr[k-1]){
                distinct=false;
                break;
            }
        }

        if (distinct)
        {
            cout << i << endl;
            break;
        }
    }
}