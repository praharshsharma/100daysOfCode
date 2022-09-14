//Last non-zero digit in factorial

// Given a number n, find the last non-zero digit in n!.


// Examples:

// Input  : n = 5
// Output : 2
// 5! = 5 * 4 * 3 * 2 * 1 = 120
// Last non-zero digit in 120 is 2.

// Input  : n = 33
// Output : 8
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function lastNon0Digit() which takes the integer N as input parameters and returns the last non-zero digit in n!.

// Expected Time Complexity: O(N^2)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1 ≤ N ≤ 100


//SOLUTION (TLE)

#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
public:

    int ans = 1;
    
    int lastDigit(int n)
    {
        while(n % 10 == 0)
        {
            n/=10;
        }
        
        return n % 100;
    }
    
    int solve(int n)
    {
        if(n == 1)
        {
            return (lastDigit(ans) % 10);
        }
        
        ans = lastDigit(ans * (n));
        
        return solve(n-1);
    }

    int lastNon0Digit(int n)
    {
        ans = lastDigit(n*(n-1));
        
        return solve(n-2);
    }
    
};

//{ Driver Code Starts.


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout<< ob.lastNon0Digit(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends