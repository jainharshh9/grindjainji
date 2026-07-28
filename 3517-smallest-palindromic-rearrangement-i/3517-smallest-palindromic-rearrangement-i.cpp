class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size(); 
        int p= n/2;

        sort(s.begin(),s.begin()+p);

        for(int i=0;i<p;i++){
            s[n-i-1]=s[i];
        }
        return s;
    }
};