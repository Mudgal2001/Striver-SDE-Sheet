#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp map<int,int>
#define pii pair<int,int>
#define w(x) int x;cin>>x;while(x--)
#define mod 1e9+7
#define mk(arr,n,type) type *arr=new type[n];
const int N=0;


void solve(){
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	
	 int maxi = INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum+=it;
             maxi=max(maxi,sum);
            if(sum<0)sum=0;
            
        }
	cout<<maxi<<endl;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}