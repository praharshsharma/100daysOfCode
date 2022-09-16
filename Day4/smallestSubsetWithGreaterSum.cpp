//Smallest Subset with Greater Sum

// You are given an array Arr of size N containing non-negative integers. Your task is to choose the minimum number of elements such that their sum should be greater than the sum of the rest of the elements of the array.

// Example 1:

// Input:
// N = 4 
// Arr[] = {2, 17, 7, 3}
// Output:
// 1
// Explanation:
// If we only select element 17, the sum of the
// rest of the elements will be (2+3+7)=12.
// So the answer will be 1.
// Example 2:

// Input:
// N = 4
// Arr = {20, 12, 18, 4}
// Output:
// 2
// Explanation:
// If we select 12 and 18 from the array,
// the sum will be (12+18) = 30 and the sum of
// the rest of the elements will be (20+4) = 24.
// So, the answer will be 2. We can also
// select 20 and 18 as well.
 

// Your Task:

// You don't need to read input or print anything. Your task is to complete the function minSubset() which takes the array Arr[] and its size N as inputs and returns the minimum number of elements to be selected.

 

// Expected Time Complexity: O(N log N)
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1 <= N <= 105
// 1 <= Arr[i] <= 109
//Array may contain duplicate elements. 


//SOLUTION
//TIME COMPLEXITY O(NlogN)


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &arr,int n){
        
        long long sum = 0 , sum2 = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        
        sort(arr.begin() , arr.end());
        
        int ct = 0;
        
        for(int i = n-1 ; i>=0 ; i--)
        {
            sum2 += arr[i];
            sum -= arr[i];
            
            ct++;
            
            if(sum2 > sum)
            {
                break;
            }
        }
        
        
        return ct;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends