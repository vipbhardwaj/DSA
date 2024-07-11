class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i=0; i < s.size(); i++) {
            if(s[i] == '(')
                st.push(i);
            else if(s[i] == ')') {
                int t = st.top();
                st.pop();
                reverse(s.begin() + t + 1, s.begin() + i);
            }
        }
        string res;
        for(char c: s)
            if(c != '(' && c != ')')
                res.push_back(c);
        return res;
    }
};