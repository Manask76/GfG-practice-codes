//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
        int k=1000000007;
        if(n==1) return 1;
        if(n==2) return 1;
        int a=1;
        int b=1;
        int sum=0;
        for(int i=3;i<=n;i++){
            sum=(a+b)%k;
            a=b;
            b=sum%k;
        }
        return sum%k;
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
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends