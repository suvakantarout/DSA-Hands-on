#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size = nums.size();
        double maxAvg = INT_MIN;
        
        for (int i = 0; i <= size - k; i++) {
            int windowSum = 0;
            
            for (int j = i; j < i + k; j++) {
                windowSum += nums[j];
            }
            
            maxAvg = max(maxAvg, (double)windowSum / k);
        }
        
        return maxAvg;
    }
};

