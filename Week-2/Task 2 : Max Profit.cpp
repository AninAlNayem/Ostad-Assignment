#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& prices) {
    int mn=prices[0];
    int res=-1;
    int n=prices.size();
    for(int i=1;i<n;i++){
        mn=min(mn,prices[i]);
        int tmp=prices[i]-mn;
        if(tmp>res){
           res=tmp;
        }
            
    }
return res>0?res:0;
 }

int main() {
	// your code goes here
	int n;scanf("%d",&n);
	vector<int>prices;
	for(int i=0;i<n;i++){
		int a;scanf("%d",&a);
		prices.push_back(a);
	}
	int res=solve(prices);
	printf("%d\n",res);
	
	return 0;
}
