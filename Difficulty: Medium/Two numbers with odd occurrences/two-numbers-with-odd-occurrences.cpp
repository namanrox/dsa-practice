//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N) {
        vector<long long int> odd;
        unordered_map <long long int, int> mpp(N/2 + 1);
        for(int i=0; i<N; i++) mpp[Arr[i]]++;
        for(auto it: mpp) {
            if(it.second%2 != 0)
                odd.push_back(it.first);
        }
        sort(odd.rbegin(), odd.rend());
        return odd;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends