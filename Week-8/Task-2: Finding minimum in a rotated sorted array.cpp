#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr){

    int l=0,r=arr.size()-1;
    int res=INT_MAX;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[l]<=arr[m]){
            res=min(res,arr[l]);
            l=m+1;
        }
        else{
            res=min(res,arr[m]);
            r=m-1;
        }
    }
return res;
}

int main(){

   int n;cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int res=binarySearch(arr);
   printf("%d\n",res);

return 0;
}
