#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(ll a,ll b){

    if(a>b){
      ll t=b;
      b=a;
      a=t;
	}
	ll sum=0;
	a=a-1;
	sum=(b*(b+1)/2)-(a*(a+1)/2);
	printf("%lld\n",sum);

}

int main() {

	ll a,b;
	scanf("%lld%lld",&a,&b);
	sum(a,b);
	return 0;
}

/*
Complexity:

Time Complexity= O(1)
Space Complexity=O(1)

*/
