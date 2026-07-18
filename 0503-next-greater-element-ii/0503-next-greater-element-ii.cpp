/*
  class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
      /*  vector<int> nge(n, -1); // Initialize with -1
        stack<int> st; // Stack to keep track of next greater elements

        // Iterate twice through the array to handle circular conditions
        for (int i = 2 * n - 1; i >= 0; i--) {
            // Pop elements that are smaller than or equal to nums[i % n]
            while (!st.empty() && st.top() <= nums[i % n]) {
                st.pop();
            }

            // Only update nge for the first n elements
            if (i < n) {
                if (!st.empty()) {
                    nge[i] = st.top();
                }
            }

            // Push current element for next iterations
            st.push(nums[i % n]);
        }
        
        return nge;


        */

     /*   stack<int> st;

        for(int i=n-2;i>=0;i--){
            st.push(nums[i]);
        }

        vector<int> res(n,-1);

        for(int i= n-2;i>=0;i--){
            while(!st.empty() && st.top() < nums[i]){
                st.pop();
            }

            if(!st.empty()){
                res[i]=st.top();
            }
            st.push(nums[i]);
        }

        return res;


*/

















        //prev greater ka code h ye niche 
       /* vector<int> res;
        stack<int> st;
        res[0]=-1;
        st.push(nums[0]);

        for(int i=1;i<n;i++){

        while(!st.empty() and st.top() <= nums[i])
        st.pop();

        if(st.empty()){
            res[i]=-1;
            else 
            res[i]=st.top();
            st.push(nums[i]);
        }
        }
        return res;


*/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {

            int ans = INT_MIN;

            // right side
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) {
                    ans = nums[j];
                    break;
                }
            }

            // circular part
            if (ans == INT_MIN) {
                for (int k = 0; k < i; k++) {
                    if (nums[k] > nums[i]) {
                        ans = nums[k];
                        break;
                    }
                }
            }

           ans==INT_MIN  ? res.push_back(-1): res.push_back(ans);
        }

        return res;
    }
};