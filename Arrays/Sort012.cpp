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
	int n;cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	int i=0;int j=nums.size()-1;
        int mid=0;
        while(mid<=j){
            if(nums[mid]<1){
                swap(nums[i],nums[mid]);
                mid++;i++;
                }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[j]);
                j--;
            }
        }
        for(int k=0;k<n;k++)cout<<nums[k]<<" ";
        	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}