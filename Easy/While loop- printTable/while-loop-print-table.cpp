//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        int table;
        while(multiplier)
        {
           //Your code here
           
           table=n*multiplier;
           cout<<table<<" ";
           multiplier--;
           
        }
        
        cout<<endl;
    }  
    
    
    
    
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Solution obj;
	    obj.printTable(n);
	    
	}
	return 0;
}
// } Driver Code Ends