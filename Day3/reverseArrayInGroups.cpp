// Reverse array in groups


// Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

// Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size).

// Example 1:

// Input:
// N = 5, K = 3
// arr[] = {1,2,3,4,5}
// Output: 3 2 1 5 4
// Explanation: First group consists of elements
// 1, 2, 3. Second group consists of 4,5.
 

// Example 2:

// Input:
// N = 4, K = 3
// arr[] = {5,6,8,9}
// Output: 8 6 5 9
 

// Your Task:
// You don't need to read input or print anything. The task is to complete the function reverseInGroups() which takes the array, N and K as input parameters and modifies the array in-place. 

 

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)

 

// Constraints:
// 1 ≤ N, K ≤ 107
// 1 ≤ A[i] ≤ 1018


// SOLITION
// TIME COMPLEXITY O[N]

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        
        int i = 0;
        
        for(i = 0 ; i <= n - k ; i = i + k)
        {
            int j = i;
            
            int temp = k/2;
            
            int x = j + k - 1;
            
            while(temp--)
            {
                swap(arr[j] , arr[x]);
                j++;
                x--;
            }
            
        }
        
        if(i < n)
        {
            int x = (n-i)/2;
            
            int temp = n - 1;
            
            while(x--)
            {
                swap(arr[i] , arr[temp]);
                i++;
                temp--;
            }
        }
         
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends