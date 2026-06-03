class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++){
            char x=s[i];
            if(st.size()==0){
                st.push(x);
            }
            else if(x==')' && st.top()=='('){
                st.pop();
            }
            else if(x=='}' && st.top()=='{'){
                st.pop();
            }
            else if(x==']' && st.top()=='['){
                st.pop();
            }
            else{
                st.push(x);
            }
        }

        return st.size()==0;

    }
};
