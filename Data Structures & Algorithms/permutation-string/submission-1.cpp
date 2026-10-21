class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int k = s1.length();
        vector<int>s1Wind(26,0),s2Wind(26,0);

        for(int i=0;i<k;i++){
            s1Wind[s1[i]-'a']++;
            s2Wind[s2[i]-'a']++;
        }

        if(s1Wind == s2Wind) return true;

        for(int i=k; i < s2.length(); i++){
            s2Wind[s2[i]-'a']++;
            s2Wind[s2[i-k]-'a']--;
        if(s1Wind == s2Wind) return true;
        }
    return false;
    }
};
