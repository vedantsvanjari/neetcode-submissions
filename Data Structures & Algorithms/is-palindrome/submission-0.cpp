class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        for(char c:s){
            if((c>='A' && c<='Z') || (c>='a' && c<='z')){
                str.push_back(tolower(c));
            }
            else if(c>='0' && c<='9'){
                str.push_back(c);
            }            
        }
        for(int i=0;i<str.size()/2;i++){
            if(str[i]!=str[str.size()-1-i]){
                return false;
            }
        }
        return true;
    }    
};
