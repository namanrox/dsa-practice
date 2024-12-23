//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<int> dp;
    int demo(int initial, vector<int>& arr, int k, int n) {
        int shortest = INT_MAX;
        if(initial >= n-1) return 0;
        if(dp[initial] != -1) return dp[initial];
        for(int i = initial+1; i <= min(initial + k, n-1); i++) {
            shortest = min(abs(arr[initial] - arr[i]) + demo(i, arr, k, n), shortest);
        }
        dp[initial] = shortest;
        return dp[initial];
    }
    int minimizeCost(int k, vector<int>& arr) {
        int n = arr.size();
        dp = vector<int> (n, -1);
        return demo(0, arr, k, n);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends