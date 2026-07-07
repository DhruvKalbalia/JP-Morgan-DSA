class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //HASHING
        unordered_set <int> st;//unordered set

        for (int num:nums){
            if (st.count(num))//if element is already present 
                return true;//returns true

            st.insert(num);//inserts element 
        }
        return false;
    }
};