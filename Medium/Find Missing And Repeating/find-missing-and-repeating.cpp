//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
       int duplicate = -1;
       int missing = -1;
       
       int i=0;
       
       
       while(i<n) {
           if(arr[i] != i+1) {
               //element is not in right place
               if(arr[i] != arr[arr[i]-1]) {
                   swap(arr[i],arr[arr[i] -1]);
               }
               
               else {
                   duplicate = arr[i];
                   i++;
               }
           }
           
           else {
               //element is in right place
               i++;
           }
       }
       
       //now array is sorted just traverse and check which element is not in proper location
       
       i=0;
       
       while(i<n) {
           if(arr[i] != i+1) {
               missing = i+1;
               break;
           }
           i++;
       }
       
       
       vector<int> ans = {duplicate,missing};
       
       return ans;
       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends