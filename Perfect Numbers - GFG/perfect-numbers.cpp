//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        if(N==1)return 0;
        long long sum =1;
        for(long long i=2; i*i<=N; i++){
            if(N%i==0){
                if(i*i!=N) sum+=N/i;
                sum+=i;
            }
        }
        if(sum==N)
        
            return 1;
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends