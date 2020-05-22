// Problem :  Spirally traversing a matrix 

#include<bits/stdc++.h>
using namespace std;
void Sp(vector<vector<int>> v, int m, int n){
    int k=0,l=0,i;
    while(k<m && l<n){
       for(i=l;i<n;i++) cout<<v[k][i]<<" ";
       k++;
       for(i=k;i<m;i++) cout<<v[i][n-1]<<" ";
       n--;
       if(k<m) {
           for(i=n-1;i>=l;i--) cout<<v[m-1][i]<<" ";
            m--;
       }
       if(l<n){
           for(i=m-1;i>=k;i--) cout<<v[i][l]<<" ";
           l++;
       }
    }
    cout<<endl;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    vector<vector<int>> v(m);
	    for(int i=0;i<m;i++){
	        v[i].resize(n);
	        for(int j=0;j<n;j++){
	            cin>>v[i][j];
	        }
	    }
	    Sp(v,m,n);
	}
	return 0;
}
