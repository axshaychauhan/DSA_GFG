//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        long long int orignalNo = n;
        long long cubeSum = 0;
        
        while(n>0) {
            long long digit = n%10;
            cubeSum += (digit*digit*digit);
            n = n/10;
        }
        
        if(cubeSum == orignalNo)
            return "Yes";
        else 
            return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends