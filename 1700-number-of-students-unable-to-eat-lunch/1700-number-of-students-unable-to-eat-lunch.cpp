class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> qu;
        for(int i = 0; i < students.size(); i++) {
            st.push(sandwiches[sandwiches.size() - 1 - i]);
            qu.push(students[i]);
        }
        int count = 0;
        while(!st.empty()) {
            if(st.top() == qu.front()) {
                st.pop();
                qu.pop();
                count = 0;
            } else {
                qu.push(qu.front());
                qu.pop();
                count++;
            }
            if(count == qu.size()) {
                break;
            }
        }
        return qu.size();
    }
};