#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp map<int,int>
#define pii pair<int,int>
#define w(x) int x;cin>>x;while(x--)
#define mod 1e9+7
#define mk(arr,n,type) type *arr=new type[n];



void solve(){
	int n;
	cin>>n;
	vector<vector<int>>ans(n);
        ans[0].push_back(1);
        for(int i=1;i<n;i++){
         for(int j=0;j<i+1;j++){
            if(j==0 || j==i){ ans[i].push_back(1);}
             else{
              ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
             }
           }
        }
        for(int i=0;i<n;i++){
        	for(int j=0;j<ans[i].size();j++){
        		cout<<ans[i][j]<<" ";
        	}
        	cout<<endl;
        }
	
	
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}