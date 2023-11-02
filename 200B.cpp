// Problem: B. Drinks
// Contest: Codeforces - Codeforces Round 126 (Div. 2)
// URL: https://codeforces.com/problemset/problem/200/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double ans=0;
	cin>>n;
	int *p=new int[n];
	for(int i=0; i<n; i++){
		cin>>p[i];
	}
	double w = 100.0/n;
	for(int i=0; i<n; i++){
		double k= (p[i]/100.0);
		ans+=(k);
	}
	ans=ans*w;
	
	printf("%.12f", ans);
	delete []p;
	return 0;
}
