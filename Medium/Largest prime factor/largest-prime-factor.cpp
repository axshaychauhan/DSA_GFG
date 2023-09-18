//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        
        //keep largest as -1 in start
        int largest = -1;
        
        
        
        // devide N by 2 until it becomes undevisible , this will eleiminate all the even factors
        while(N%2 == 0) {
            largest = 2;
            N /= 2;
        }
        
        
        //Now start dividing n with odd numbers start from 3
        for(int i=3; i<=sqrt(N); i+=2) {
            while(N%i ==0) {
                largest = i;
                N/= i;
            }
        }
         
         
         // if N > 1 then N will be largest prime factors
         if(N>1)
            return N;
            
        //else return largest    
        return largest;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends