int First_Index(string haystack, string needle) {
    
    const int p = 31; 
    const int m = 1e9 + 9;
    int S= needle.size(), T = haystack.size();

    vector<long long>p_pow(max(S, T)); 
        
    p_pow[0] = 1; 
        
    for(int i=1;i<(int)p_pow.size(); i++){
        
        p_pow[i] = (p_pow[i-1] * p) % m; // calculating power
    }
        
    vector<long long>h(T + 1, 0); 
    
    // Calculating hash of haystack
   
    for(int i=0;i<T;i++){
       
        h[i+1]=(h[i]+(haystack[i]-'a'+1)*p_pow[i]) % m; 
    }
       
        
    long long h_s=0; 
    
    // Calcualting hash of the substring
        
    for(int i=0;i<S;i++){
        
        h_s= (h_s +(needle[i]-'a'+ 1)*p_pow[i]) % m; 
    }
        
    int ans=-1;
        
    for (int i=0;i+S-1<T;i++){
        
        long long cur_h=(h[i+S]+m-h[i])% m;
        
        if (cur_h==h_s*p_pow[i]%m){
            ans=i;
            break;
        }
            
     }
    return ans;
 }

// Time Complexity: O(len(text)+len(pattern))  and Space Complexity: O(n)




