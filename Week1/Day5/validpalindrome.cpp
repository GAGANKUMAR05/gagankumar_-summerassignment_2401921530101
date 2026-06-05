class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
      int right=s.size() - 1;
    while(left<right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else if(tolower(s[right])!=tolower(s[left])){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
    }
};