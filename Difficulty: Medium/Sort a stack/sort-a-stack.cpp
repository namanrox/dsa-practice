//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);

cout << "~" << "\n";
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */

void sorted(int tmp, stack<int> &s) {
    if(s.empty() or s.top() <= tmp) {
        s.push(tmp);
        return;
    }
    int tmp1 = s.top();
    s.pop();
    sorted(tmp, s);
    s.push(tmp1);
}

void SortedStack :: sort()
{
   if(s.empty()) return;
   int tmp = s.top();
   s.pop();
   sort();
   sorted(tmp, s);
}