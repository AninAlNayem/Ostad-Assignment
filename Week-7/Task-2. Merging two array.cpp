#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,m;cin>>m>>n;

   int arr1[m];
   for(int i=0;i<m;i++)
      arr1[i]=0;

   int arr2[n];
   for(int i=0;i<n;i++)
       arr2[i]=0;

   for(int i=0;i<m;i++)cin>>arr1[i];
   for(int i=0;i<n;i++)cin>>arr2[i];
   int idx=m-n;
   for(int i=0;i<n;i++){
     arr1[idx++]=arr2[i];
   }
   sort(arr1,arr1+m);
   for(int i=0;i<m;i++){
    cout<<arr1[i]<<" ";
   }
   cout<<endl;


return 0;
}
