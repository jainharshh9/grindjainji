class Solution {
public:
    int firstUniqChar(string s) {

        int n=s.length();
    unordered_map<char,int> f;

    for(int i=0;i<n;i++){
        f[s[i]]++;
    }

    for(int j=0;j<n;j++){
        if(f[s[j]]==1)
        return j;
    }

    return -1;
        
    }
};