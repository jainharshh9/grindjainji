class Solution {
public:
    int maxProduct(int n) {
        vector<int> res;
        int final=0;

while(n>0){
res.push_back(n%10);
n=n/10;
}

for(int i=0;i<res.size();i++){
    for(int j=i+1;j<res.size();j++){
int ans = res[i]*res[j];
final = max(ans,final);

    }
   
}
return final;
        
    }
};