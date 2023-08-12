//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int i = -1;
        for(auto& ch: x) {
            if(ch=='(' || ch=='{' || ch=='[') {
                x[++i] = ch;
            } else {
                if(i >= 0 && ((x[i]=='(' && ch==')') || (x[i]=='{' && ch=='}') || (x[i]=='[' && ch==']'))) {
                    i--;
                } else {
                    return false;
                }
            }
        }
        return i==-1;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends