class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()){
            return false;
        }
        vector<int>s1hash(26,0);
        vector<int>s2hash(26,0);
        int left=0,right=0;
        while(right<s1.length()){
            s1hash[s1[right]-'a']++;
            s2hash[s2[right]-'a']++;
            right++;
            
        }
        right--; // to point right to the end of the window;
        while(right<s2.length()){
           if(s1hash==s2hash){
               return true;
           }
            right++;
            if(right!=s2.length()){
                s2hash[s2[right]-'a']++;
            }
            s2hash[s2[left]-'a']--;
            left++;
        }
        return false;
    }
};
