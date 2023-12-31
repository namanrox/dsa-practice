//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long arr[n+m];
            int left=0, right=0, index=0;
            while(left < n && right < m) {
                if (arr1[left] <= arr2[right]) {
                    arr[index] = arr1[left];
                    left++;
                    index++;
                } else {
                    arr[index] = arr2[right];
                    right++;
                    index++;
                }
            }
            while(left < n) {
                arr[index++] = arr1[left++];
            }
            while(right < m) {
                arr[index++] = arr2[right++];
            }
            for(int i=0; i<n+m; i++) {
                if (i<n) {
                    arr1[i] = arr[i];
                } else {
                    arr2[i-n] = arr[i];
                }
            }
        }
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends