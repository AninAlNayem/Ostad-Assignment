string String_Shuffle(string s, vector<int>& indices) {
        char str[105];
        int n=indices.size();
        for(int i=0;i<n;i++){
            int idx=indices[i];
            str[idx]=s[i];
        }
        string ans="";
        for(int i=0;i<n;i++){
           ans.push_back(str[i]);
        }
       return ans;
    }

// Time Complexity: O(n) and Space Complexity: O(n)
