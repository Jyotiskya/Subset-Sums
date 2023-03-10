
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
void  solve(vector<int>arr,int N,int index,int sum,vector<int>&res)
{
    if(index==N)
    {
        res.push_back(sum);
        return ;

    }
    solve(arr,N,index+1,sum+arr[index],res);

    solve(arr,N,index+1,sum,res);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>res;
        int index=0;
        int sum=0;
        solve(arr,N,index,sum,res);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
