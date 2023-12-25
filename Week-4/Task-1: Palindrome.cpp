#include <iostream>
using namespace std;

bool solve(string s,int i,int j){
        
    if(i>=j)return true;
    if(s[i]!=s[j])
        return false;
 
    return solve(s,i+1,j-1);
    
}

int main() {
    string str;
    cin>>str;
    bool res=solve(str,0,str.length()-1);
    if(res){
    	cout<<"true";
    }
    else{
    	cout<<"false";
    }
	return 0;
}
