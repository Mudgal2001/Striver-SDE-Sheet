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
	int n;cin>>n;
	vector<vector<int>>intervals(n,vector<int>(2));
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){cin>>intervals[i][j];}}
	   if(intervals.size()<=1){for(int i=0;i<intervals.size();i++);}else{
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(output.back()[1] >= intervals[i][0]) output.back()[1] = max(output.back()[1] , intervals[i][1]);
            else output.push_back(intervals[i]); 
        }
        for(int i=0;i<output.size();i++){
        	cout<<output[i][0]<<" "<<output[i][1];
        }
      
	}
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}