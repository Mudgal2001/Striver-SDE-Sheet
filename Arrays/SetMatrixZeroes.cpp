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
	int n,m;
	cin>>n>>m;
	vector<vector<int>>matrix(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){cin>>matrix[i][j];}
	}
	 bool firstRow = false; 
        bool firstCol = false; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
					if(matrix[i][j] == 0){  
                    if(i==0) firstRow = true;
                    if(j==0) firstCol = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<m;i++) matrix[0][i] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<n;i++) matrix[i][0] = 0;
        }
	  for(int i=0;i<n;i++){
	  	for(int j=0;j<m;j++){
	  		cout<<matrix[i][j]<<" ";
	  	}
	  	cout<<endl;
	  }
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	w(t){
		solve();
	}
}