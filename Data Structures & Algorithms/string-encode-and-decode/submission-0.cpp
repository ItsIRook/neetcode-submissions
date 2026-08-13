class Solution {
public:

    string encode(vector<string>& strs) {
        string c;
        for(string s:strs){
            c += to_string(s.size())+"#"+s;
        }
        return c;
    }

    vector<string> decode(string s) {
        vector<string> strs; int i=0;
        while(i<s.size()){
            int k=0;
            while(isdigit(s[i])){
                k = k*10+(s[i]-'0');
                i++;
            }
            i++;
            strs.push_back(s.substr(i,k));
                i+=k;
        }
        return strs;
    }
};
