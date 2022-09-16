// Look and Say Pattern

// Given an integer n. Return the nth row of the following look-and-say pattern.
// 1
// 11
// 21
// 1211
// 111221
// Look-and-Say Pattern:

// To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:

// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// 1211 is read off as "one 1, one 2, then two 1s" or 111221.
// 111221 is read off as "three 1s, two 2s, then one 1" or 312211.
// Example 1:

// Input:
// n = 5
// Output: 111221
// Explanation: The 5th row of the given pattern
// will be 111221.
// Example 2:

// Input:
// n = 3
// Output: 21
// Explanation: The 3rd row of the given pattern
// will be 21.

// Your Task:  
// You dont need to read input or print anything. Complete the function lookandsay() which takes integer n as input parameter and returns a string denoting the contents of the nth row of given pattern.


// Expected Time Complexity: O(2n)
// Expected Auxiliary Space: O(2n-1)  


// Constraints:
// 1 ≤ n ≤ 30

//SOLUTION 
//TIME COMPLEXITY (??)

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    string solve(string st , int n)
    {
        if(n == 0)
        {
            return st;
        }
        
        
        string ans = "";
        
        int count = 1;
        
        int i = 1;
        
        while(i < st.length())
        {
            if(st[i] == st[i-1])
            {
                count++;
            }
            else
            {
                ans.push_back(count + '0');
                ans.push_back(st[i-1]);
                count = 1;
            }
            
            i++;
        }
        
        ans.push_back(count + '0');
        ans.push_back(st[i-1]);
        
        return solve(ans,n-1);
    }
    
    
    string lookandsay(int n) {
        string st = "1";
        
        if(n == 1)
        {
            return st;
        }
        
        return solve(st,n-1);
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends