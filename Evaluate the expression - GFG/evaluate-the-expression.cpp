//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	int fib(int n) {
        int a = 0, b = 1, c, i;
        if (n == 0)
            return a;
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
   	int evaluate_exp(int n){
   	    return (fib(n-1)*fib(n+1)) - (fib(n)*fib(n));
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.evaluate_exp(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends