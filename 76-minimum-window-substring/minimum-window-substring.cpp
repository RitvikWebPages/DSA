class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> char_need;
        for(char c : t) char_need[c]++;
        unordered_map<char, int> curr_window;
        int left =0;
        int minLeft = 0;
        int minLen = 1000000;
        int have = 0;
        int need = char_need.size();
        for(int right =0; right<s.size();right++){
            curr_window[s[right]]++;
            if(char_need.count(s[right]) && char_need[s[right]] == curr_window[s[right]]){
                have++;
            }
            while(have == need){
                if(right - left + 1 < minLen){
                    minLen = right-left+1;
                    minLeft =left;
                }
                curr_window[s[left]]--;
                if(char_need.count(s[left]) && curr_window[s[left]] < char_need[s[left]]){
                    have--;
                }
                left++;
            }
        }
        if(minLen == 1000000){
            return "";
        }else{
            return s.substr(minLeft, minLen);
        }
    }
};