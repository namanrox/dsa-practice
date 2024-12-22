//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        if(n == 1) return 0;
        int count=0, initial = abs(height[1] - height[0]);
        for(int i=2; i<n; i++) {
            int tmp = abs(height[i-1] - height[i]) + initial;
            int tmp2 = abs(height[i-2] - height[i]) + count;
            count = initial;
            initial = min(tmp, tmp2);
        }
        return initial;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends