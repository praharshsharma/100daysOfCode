// Target Sum

// Given an array of integers A[] of length N and an integer target.
// You want to build an expression out of A by adding one of the symbols '+' and '-' before each integer in A and then concatenate all the integers.
// ``
// For example, if arr = {2, 1}, you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that can be built, which evaluates to target.


// Example 1:

// Input:
// N = 5
// A[] = {1, 1, 1, 1, 1}
// target = 3
// Output:
// 5
// Explanation:
// There are 5 ways to assign symbols to 
// make the sum of nums be target 3.
// -1 + 1 + 1 + 1 + 1 = 3
// +1 - 1 + 1 + 1 + 1 = 3
// +1 + 1 - 1 + 1 + 1 = 3
// +1 + 1 + 1 - 1 + 1 = 3
// +1 + 1 + 1 + 1 - 1 = 3

// Example 2:

// Input:
// N = 1
// A[] = {1}
// target = 1
// Output:
// 1

// Your Task:
// The task is to complete the function findTargetSumWays() which finds and returns the number of different expressions that can be built.

 

// Expected Time Complexity: O(N*sum), where sum refers to the range of sum possible.
// Expected Auxiliary Space: O(N).

 

// Constraints:
// 1 ≤ N ≤ 20
// 0 ≤ A[i] ≤ 1000
// 0 <= sum(A[i]) <= 104
// -1000 <= target <= 1000




//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
    
    public:
  
    int count = 0;
    
    void solve(vector<int> &v , int sum , int k , int n)
    {
        if(n==0)
        {
            if(sum == k)
                count++;
                
            return;
        }
        
        
        solve(v,sum + v[n-1],k,n-1);
        solve(v,sum - v[n-1],k,n-1);
        
    }
 
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        
        int n = A.size();
        
        solve(A,0,target,n);
        
        return count;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends