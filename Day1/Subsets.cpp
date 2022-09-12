// Subsets

// Given a set of positive integers, find all its subsets.

// Example 1 :

// Input : 
// array = {1, 2, 3}
// Output :
// // this space denotes null element. 
// 1
// 1 2
// 1 2 3
// 1 3
// 2
// 2 3
// 3
// Explanation: 
// The following are the subsets 
// of the array {1, 2, 3}.
// Example 2 :

// Input :
// array = {1, 2}
// Output :

// 1 
// 1 2
// 2
// Explanation :
// The following are the 
// subsets of {1, 2}.
// Your task :
// You don't have to read input or print anything. Your task is to complete the function subsets() which takes the array of integers as input and returns the list of list containing the subsets of the given set of numbers in lexicographical order.
 
// Expected Time Complexity : O(2^n)))
// Expected Auxiliary Space : O(2^n*length of each subset)
 
// Constraints :
// 1 <= n <= 20
// 1 <= arr[i] <=10



//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    int i = 0;
    
    vector<vector<int>> ans;
    
    vector<int> v;
    
    void solve(int i , vector<int> &arr , vector<int> v , int n)
    {
        if(i == n)
        {
            ans.push_back(v);
            return;
        }
        
        solve(i+1,arr,v,n);
        v.push_back(arr[i]);
        solve(i+1,arr,v,n);
        
    }
    
    public:
    vector<vector<int> > subsets(vector<int>& A)
    {
        int n = A.size();
        solve(0 , A , v , n);
        
        sort(ans.begin() , ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends
