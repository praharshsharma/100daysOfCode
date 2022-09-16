// Largest subarray with 0 sum

// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

// Example 1:

// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7.
// Your Task:
// You just have to complete the function maxLen() which takes two arguments an array A and n, where n is the size of the array A and returns the length of the largest subarray with 0 sum.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= N <= 105
// -1000 <= A[i] <= 1000, for each valid i

//WRONG ANSWER

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        int maxpos = 0 , maxneg = 0;
        
        int length = 0 , maxx = 0;
        
        for(int i = 0 ; i < n; i++)
        {
            if(arr[i] >= 0) maxpos+=arr[i];
            else maxneg += arr[i];
        }
        
        int i = 0 , j = 0 , pos = 0 , neg = 0 , sum = 0;
        
        while(j<n)
        {
            //cout<<sum<<endl;
            
            if((pos > -1*(maxneg)) || ((-1*neg) > maxpos))
            {
                sum-=arr[i];
                if(arr[i] >= 0)
                {
                    pos-=arr[i];
                }
                else
                {
                    neg-=arr[i];
                }
                i++;
                continue;
            }
            
            
            if(arr[j] >= 0)
            {
                pos += arr[j];
            }
            else{
                neg += arr[j];
            }
            
            
            sum += arr[j];
            
            if(sum == 0)
            {
                cout<<"."<<endl;
                maxx = max(maxx , j - i + 1);
            }
            
            
            j++;
            
            
            
        }
        
        return maxx;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends