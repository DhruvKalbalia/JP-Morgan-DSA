class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        int minPrefix = 0;

        for (int num:nums){
            sum+=num;
            minPrefix = min(minPrefix,sum);
        }
        return 1-minPrefix;
        //startvalue + minPrefix >=1
        //startvalue = 1-minPrefix
    }
};