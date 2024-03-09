#include<bits/stdc++.h>
using namespace std;
int dp[46];

int solve(int n){

   if(n==1)
     return 1;

   if(n==2)
     return 2;

   if(dp[n]!=-1)
     return dp[n];

   dp[n]=solve(n-1)+solve(n-2);

return dp[n];
}

void Set(){
  memset(dp,-1,sizeof dp);
}

int main(){

   int n;
   Set();
   cin>>n;
   cout<< solve(n) <<"\n";

return 0;
}

///Time and Space Complexity : O(n);
