#include<bits/stdc++.h>
using namespace std;

void solution() {
    string s;
    char c;
    cin >> s;

    stack<char> st;

    for(int i = 0; i < s.size(); i++) {
        if(s[i]== '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {
            if(st.empty()) {                        // That means we get a closing parentheses at first before any opening
                cout << "false" << endl;        // parentheses. That is not valid. so we print false. and return.
                return;
            }
            c = st.top();
            if(c == '(' && s[i] == ')' || c == '{' && s[i] == '}' || c == '[' && s[i] == ']') {
                st.pop();
            }
            else {
                cout << "false" << endl;
                return;
            }
        }
    }

    if(st.empty() == true )
        cout << "true" << endl;
    else
        cout << "false" << endl;

}


int main() {

    solution();

    return 0;
}
