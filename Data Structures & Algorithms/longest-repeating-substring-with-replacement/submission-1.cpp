class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int ans=0;
        int maxf=0;
        unordered_map<char,int>window;
        for(int end=0;end<s.size();end++){
            window[s[end]]++;
            maxf=max(maxf,window[s[end]]);
            while((end-start+1)-maxf > k){
                window[s[start]]--;
                start++;
            }
        ans=max(ans,end-start+1);
        }
    return ans;
    }
};
