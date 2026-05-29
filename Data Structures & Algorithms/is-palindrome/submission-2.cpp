class Solution {
public:
    string clean(string str){
        string ans="";
        for(char c : str) if(isalnum(c)) ans+=c;
        return ans;
    }
    bool isPalindrome(string s) {
        string str=clean(s);
        int n=str.length();
        for(int i=0;i<n/2;i++){
            if(tolower(str[i])!=tolower(str[n-i-1])) return false;
        }
    return true;
    }
};
