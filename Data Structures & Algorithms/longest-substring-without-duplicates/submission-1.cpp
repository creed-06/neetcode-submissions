class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>charSet;
        int start=0;
        int res=0;
        for(int end=0; end<s.length();end++){
            while(charSet.find(s[end])!= charSet.end()){
                charSet.erase(s[start]);
                start++;
            }
            charSet.insert(s[end]);
            res=max(res,end-start+1);
        }
    return res;
    }

};