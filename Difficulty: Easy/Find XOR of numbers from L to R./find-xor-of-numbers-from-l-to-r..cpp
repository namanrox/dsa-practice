//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int func(int n) {
        int mod = n % 4;
        if (mod == 0) return n;
        else if (mod == 1) return 1;
        else if (mod == 2) return n + 1;
        else if (mod == 3) return 0;
    }
    int findXOR(int l, int r) {
        return func(l-1) ^ func(r);
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends