
class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size()-1;
        int left =0;
        int max_area = 0;
        while(left < right){
            int diff = right-left;
            int smaller;
            if(height[left] > height[right]){
                smaller = height[right];
            }else{
                smaller = height[left];
            }
            int area = diff * smaller;
            max_area = max(max_area, area);
            if(height[left] > height[right]){
                right--;
            }else{
                left++;
            }
        }
        return max_area;
    }
};
