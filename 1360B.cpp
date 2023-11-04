// Problem: B. Honest Coach
// Contest: Codeforces - Codeforces Round 644 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1360/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t!=0){
		int n;
		cin>>n;
		int *s=new int[n];
		for(int i=0; i<n; i++){
			cin>>s[i];
		}
		sort(s, s+n);
		int min=INT_MAX;
		for(int i=0; i<n; i++){
			int k=abs(s[i]-s[i+1]);
			if(k<min){
				min=k;
			}
		}
		
		cout<<min<<endl;
		t--;
	}
	
	return 0;
}
