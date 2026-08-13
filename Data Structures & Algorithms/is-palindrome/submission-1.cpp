class Solution {
public:
    bool isPalindrome(string s) {
        string c;
        for(char x:s){
            if(!isalnum(x)) continue;
            c += tolower(x);
        }
        for(int i=0; i<c.size()/2; i++){
            if(c[i]!=c[c.size()-i-1]) return false;
        }
        return true;
    }
};
