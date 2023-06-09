class Solution {
public:
    bool isValid(string s) {
    stack<char>st;
    char c;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            if(st.empty()){
               return false;
            }

            c = st.top();
            if(c == '(' && s[i] == ')' || c == '{' && s[i] == '}' || c == '[' && s[i] == ']') {
                st.pop();
            }
            else
                return false;
        }
    }

    if(st.size() == 0 )
        return true;
    else
        return false;
    }
};
