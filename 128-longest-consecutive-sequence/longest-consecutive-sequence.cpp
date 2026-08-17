class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int curr = 1;
        int curr_larg = 1;
        for(int i =1; i < nums.size();i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1){
                curr++;
            }else{
                curr = 1;
            }
            if(curr_larg < curr){
                curr_larg = curr;
            }
        }
        return curr_larg;
    }

};