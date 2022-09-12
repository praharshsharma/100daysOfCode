// Pascals Triangle

// Given a positive integer N, return the Nth row of pascal's triangle.
// Pascal's triangle is a triangular array of the binomial coefficients formed by summing up the elements of previous row.

// Example :
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// For N = 3, return 3rd row i.e 1 2 1

// Example 1:

// Input:
// N = 4
// Output: 1 3 3 1
// Explanation: 4th row of pascal's triangle
// is 1 3 3 1.
// Example 2:

// Input:
// N = 5
// Output: 1 4 6 4 1
// Explanation: 5th row of pascal's triangle
// is 1 4 6 4 1.
 

// Your Task:
// Complete the function nthRowOfPascalTriangle() which takes n, as input parameters and returns an array representing the answer. The elements can be large so return it modulo 109 + 7. You don't to print answer or take inputs.

// Expected Time Complexity: O(N2)
// Expected Auxiliary Space: O(N2)

// Constraints:
// 1 ≤ N ≤ 1000



//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        int mod = 1000000000 + 7;
        
        vector< vector<ll> > soln;
        
        vector<ll> temp;
        
        temp.push_back(1);
        
        soln.push_back(temp);
        
        if(n == 1)
        {
            return temp;
        }
        
        temp.push_back(1);
        
        soln.push_back(temp);
        
        if(n == 2)
        {
            return temp;
        }
    
        
        for(ll i = 2 ; i < n ; i++)
        {
            vector<ll> curr;
            curr.push_back(1);
            for(ll j = 0 ; j <=i-2 ; j++)
            {
                curr.push_back(((soln[i-1][j])%mod + (soln[i-1][j+1])%mod)%mod);
            }
            curr.push_back(1);
            soln.push_back(curr);
        }
        
        
        return soln[n-1];
        
        
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends