// Smaller on Left

// Given an array arr[ ] of N positive integers, the task is to find the greatest element on the left of every element in the array which is strictly smaller than itself, if this element does not exist for an index print "-1".

// Example 1:

// Input:
// N = 5
// arr[] = {2, 3, 4, 5, 1}
// Output: 
// -1 2 3 4 -1
// Explanation:
// Greatest element on the left of 3 smaller 
// than itself is 2, for 4 it is 3 and for 5 
// it is 1. Since 2 is the first element and 
// no element on its left is present, so it's 
// greatest smaller element will be -1 and for 
// 1 no element smaller than itself is present 
// on its left, so it's greatest smaller element 
// is -1.
// Example 2:

// Input:
// N = 3
// arr[] = {1, 2, 3} 
// Output:
// -1 1 2 
// Your Task:
// This is a function problem. The input is already taken care of by the driver code. You only need to complete the function Smallestonleft() that takes an array arr[ ] and sizeOfArray N, and return the required answer. The driver code takes care of the printing.

// Expected Time Complexity: O(N*Log(N)).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 ≤ N ≤ 106
// 1 ≤ arr[i] ≤ 108

//SOLUTION
//TIME COMPLEXITY O(NlogN)

#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends


vector<int> Smallestonleft(int arr[], int n)
{
    vector<int> ans;
    
    ans.push_back(-1);
    
    set<int> st;
    
    st.insert(arr[0]);
    
    for(int i = 1 ; i < n ; i++)
    {
        st.insert(arr[i]);
        
        auto it = st.find(arr[i]);
        
        if(it == st.begin())
        {
            ans.push_back(-1);
            continue;
        }
        
        it--;
    
        ans.push_back(*it);
        
    }
    
    
    return ans;
   
}