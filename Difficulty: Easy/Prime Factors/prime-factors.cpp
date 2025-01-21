//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    unordered_set<int> prime;
	    while(N%2 == 0) { 
    	    prime.insert(2);
    	    N /= 2;
	    }
	    for(int i=3; i*i<=N; i+=2) {
	        while(N%i == 0) {
	            prime.insert(i);
	            N /= i;
	        }
	    }
	    if(N > 2) prime.insert(N);
	    vector<int> pf(prime.begin(), prime.end());
	    sort(pf.begin(), pf.end());
	    return pf;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends