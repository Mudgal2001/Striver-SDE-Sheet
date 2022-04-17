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
	vector<int>prices(n);
	for(int i=0;i<n;i++)cin>>prices[i];
	 int maxprofit=0;
        int profit=0;
        int k=0;
        for(int j=prices.size()-1;j>=0;j--){
            if(prices[j]>k){
                k=prices[j];}
            else{
                profit=k-prices[j];
                maxprofit=max(profit,maxprofit);
            }
        }
        cout<<maxprofit<<endl;
	
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}