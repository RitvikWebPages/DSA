class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left =0;
        int right =1;
        int curr_max = 0;

        while(right <prices.size()){
            if(prices[right] > prices[left]){
                int profit = prices[right] - prices[left];
                curr_max = max(profit, curr_max);
            }else{
                left = right;
            }
            right++;
        }
        return curr_max;
    }
};

// [1,2,4,2,5,7,2,4,9,0,9]
// curr_max = 8
// l=1
// r=9
