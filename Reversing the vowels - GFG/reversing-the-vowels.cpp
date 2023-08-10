//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        bool vowel(char c) {
            return c=='a'|| c=='e' || c=='o' || c=='i' || c=='u';
        }
        string modify (string s) {
            vector<char> v;
            for(auto c: s) {
                if(vowel(c)) {
                    v.push_back(c);
                }
            }
            int l = v.size();
            for(int i=0; i<s.size(); i++) {
                if(vowel(s[i])) {
                    s[i] = v[--l]; 
                }
            }
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends