#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // helper function
    int sumsq(int n) {
        int sum = 0;
        while (n > 0) {
            int n1 = (n % 10);
            sum += (n1 * n1);
            n /= 10;
        }
        return sum;
    }

    // main function
    bool isHappy(int n) {
        int f=n;
        int s=n;

        while(f != 1){
            s=sumsq(s);
            f=sumsq(f);
            f=sumsq(f);


            if(s==f && s!= 1){
                return false;
            }
        }
        f=1;
        return true;
    }
};
