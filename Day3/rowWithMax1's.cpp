// Row With Max 1's

// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

// Example 1:

// Input: 
// N = 4 , M = 4
// Arr[][] = {{0, 1, 1, 1},
//            {0, 0, 1, 1},
//            {1, 1, 1, 1},
//            {0, 0, 0, 0}}
// Output: 2
// Explanation: Row 2 contains 4 1's (0-based
// indexing).

// Example 2:

// Input: 
// N = 2, M = 2
// Arr[][] = {{0, 0}, {1, 1}}
// Output: 1
// Explanation: Row 1 contains 2 1's (0-based
// indexing).

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function rowWithMax1s() which takes the array of booleans arr[][], n and m as input parameters and returns the 0-based index of the first row that has the most number of 1s. If no such row exists, return -1.
 

// Expected Time Complexity: O(N+M)
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ N, M ≤ 103
// 0 ≤ Arr[i][j] ≤ 1 



//SOLUTION
//TIME COMLEXITY O(N*logN + M)

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    priority_queue<vector<int>> pq;
	    
	    int x = 0;
	    
	    for(int i = n-1 ; i >= 0; i--)
	    {
	        pq.push(arr[i]);
	        
	        if(pq.top() == arr[i]) 
	            x = i;
	    }
	    
	    int ct = 0;
	    
	    
	    for(int i = 0 ; i < m ; i++)
	    {
	        if(arr[x][i] == 1)
	            ct++;
	    }
	    
	    
	    if(ct == 0)
	        return -1;
	        
	    return x;
	    
	    
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends