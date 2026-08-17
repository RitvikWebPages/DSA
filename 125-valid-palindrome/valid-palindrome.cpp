class Solution {
public:
    bool isPalindrome(string s) {
        int right = s.length()-1;
        int left = 0;

        while(right > left){
            while (left < right && (s[left] < '0' || (s[left] > '9' && s[left] < 'A') || (s[left] > 'Z' && s[left] < 'a') || s[left] > 'z')) left++;
            while (left < right && (s[right] < '0' || (s[right] > '9' && s[right] < 'A') || (s[right] > 'Z' && s[right] < 'a') || s[right] > 'z')) right--;
            if(tolower(s[right]) != tolower(s[left])){
                return false;
            }
            right--;
            left++;

        }
        return true;
    }

};