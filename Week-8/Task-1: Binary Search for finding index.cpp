#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr,int target){

   int l=0,r=arr.size()-1;
   while(l<=r){
    int m=l+(r-l)/2;
    if(arr[m]==target){
        return m;
    }
    else if(arr[m]<target){
        l=m+1;
    }
    else{
        r=m-1;
    }
   }
return -1;
}

int main(){

   int n;cin>>n;
   int target;cin>>target;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int index=binarySearch(arr,target);
   printf("%d\n",index);

return 0;
}
