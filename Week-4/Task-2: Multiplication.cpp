#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n,ll m){
    if(n==1){
      return m;
    }
    return m+solve(n-1,m);
}

int main() {
  ll n,m;cin>>n>>m;
  cout<<solve(n,m);
return 0;
}
