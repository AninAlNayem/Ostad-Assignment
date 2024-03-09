#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& prices){

    int profit=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1]){
            profit+=prices[i]-prices[i-1];
        }
    }
return profit;
}

int main(){

   int n;cin>>n;
   vector<int>prices(n,0);
   for(int i=0;i<n;i++){
      cin>>prices[i];
   }

   cout<<solve(prices)<<"\n";

return 0;
}

///Time Complexity O(n) Space Complexity O(1).
