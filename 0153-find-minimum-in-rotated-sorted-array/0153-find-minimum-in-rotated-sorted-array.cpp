#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;

        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid] > arr[n-1]){
                low=mid+1;
            }
            else {
                ans=mid;
                high=mid-1;
            }
        }
        return arr[ans];

    }
};