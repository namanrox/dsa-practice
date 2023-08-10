//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int kthDigit(int A,int B,int K){
        long num = pow(A, B);
        int count = 0;
        while(num > 0 and count < K) {
            int rem = num % 10;
            count++;
            if(count == K) {
                return rem;
            }
            num /= 10;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int A,B,K;
        cin>>A>>B>>K;
        Solution ob;
        cout << ob.kthDigit(A,B,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends