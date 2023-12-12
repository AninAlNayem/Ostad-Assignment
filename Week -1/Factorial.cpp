#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    int fact=1;
	for(int i=1;i<=n;i++)
	   fact=fact*i;

	printf("%d\n",fact);
}

int main() {

	int n;
	scanf("%d",&n);
	factorial(n);
	return 0;
}

/*
Complexity:

Time Complexity= O(n)
Space Complexity=O(1)

*/


