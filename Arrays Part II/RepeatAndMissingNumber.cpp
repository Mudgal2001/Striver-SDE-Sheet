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
	vector<int>arr(n);
	for(int i=0;i<n;i++)cin>>arr[i];
	int *ans=new int [2];
        for(int i=0;i<n;i++){
            if(arr[abs(arr[i])-1]>0){
                arr[abs(arr[i])-1]=-1*arr[abs(arr[i])-1];
            }else{
                ans[0]=abs(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans[1]=i+1;
            }
        }
       cout<<ans[0]<<" "<<ans[1];
       	cout<<endl;
	
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}