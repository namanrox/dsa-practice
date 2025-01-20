//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    pair<int, int> get(int a, int b){
        // Method 1:
        return pair<int, int> (b, a);
        
        // Method 2:
        swap(a, b);
        return pair<int, int> (a, b);
        
        // Method 3:
        a += b;
        b = a - b;
        a -= b;
        return pair<int, int> (a, b);
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        Solution ob;
        pair<int, int>p = ob.get(a, b);
        cout << p.first << ' ' << p.second << endl;
    
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends