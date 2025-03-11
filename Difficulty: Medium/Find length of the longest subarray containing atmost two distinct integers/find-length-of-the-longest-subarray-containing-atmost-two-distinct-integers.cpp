//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int totalElements(vector<int> &arr) {
        int n = arr.size(), maxi = 0;
        unordered_map<int, int> mp;
        for(int i=0, j=0; i<n; i++) {
            mp[arr[i]]++;
            for(; j<n and mp.size()>2; j++) {
                mp[arr[j]]--;
                if(mp[arr[j]] == 0) mp.erase(arr[j]);
            }
            maxi = max(maxi, i - j + 1);
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends