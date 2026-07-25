class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         int n=p.length();
        int m=s.length();
        vector<int> res;
        
        vector<int> need(256,0);
        vector<int> have(256,0);
        
        for(char c:p){
            need[c]++;
        }
        int ans=0;
        int i=0;
        int j=0;
        
        while(j<m){
            have[s[j]]++;
        
        
        if(j-i+1 > n){
            have[s[i]]--;
            i++;
        }
        if(j-i+1 == n){
            if(have==need)
            res.push_back(i);
        }
        j++;
        }
        return res;
    }
};