//Subset Sum Problem

// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 


// Example 1:

// Input:
// N = 6
// arr[] = {3, 34, 4, 12, 5, 2}
// sum = 9
// Output: 1 
// Explanation: Here there exists a subset with
// sum = 9, 4+3+2 = 9.
// Example 2:

// Input:
// N = 6
// arr[] = {3, 34, 4, 12, 5, 2}
// sum = 30
// Output: 0 
// Explanation: There is no subset with sum 30.

// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function isSubsetSum() which takes the array arr[], its size N and an integer sum as input parameters and returns boolean value true if there exists a subset with given sum and false otherwise.
// The driver code itself prints 1, if returned value is true and prints 0 if returned value is false.
 

// Expected Time Complexity: O(sum*N)
// Expected Auxiliary Space: O(sum*N)
 

// Constraints:
// 1 <= N <= 100
// 1<= arr[i] <= 100
// 1<= sum <= 105



//RECURSION SOLUTION
//TIME COMPLEXITY O(2^N)

#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:

    bool ans = 0;
    
    void solve(int i , vector<int> &arr , int sum , int n , int target)
    {
        if(i == n)
        {
            if(sum == target)
            {
                ans = 1;
            }
            
            return;
        }
            
        solve( i+1 , arr , sum , n , target);
        solve( i+1 , arr , sum+arr[i] , n , target);
    }

    bool isSubsetSum(vector<int>arr, int target){
        // code here 
        
        int n = arr.size();
        
        solve( 0 , arr , 0 , n , target);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

//DP SOLUTION
//TIME COMPLEXITY O(SUM*N)


