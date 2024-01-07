#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    stack<char>st;
    int n=s.length();
    for(int i=0;i<n;i++){
       if(!st.empty() && s[i]==st.top()){
           while(!st.empty() && s[i]==st.top()){
                st.pop();
           }
       }
       else{
           st.push(s[i]);
       }

    }
    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());

return res;
}

int main(){

    int t;cin>>t;
    while(t--){
        string str;cin>>str;
        str=removeDuplicates(str);
        cout<<str<<"\n";
    }
return 0;
}
