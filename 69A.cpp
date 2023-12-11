// Problem: A. Young Physicist
// Contest: Codeforces - Codeforces Beta Round 63 (Div. 2)
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int xsum=0;
	int ysum=0;
	int zsum=0;
	int x,y,z;
	while(n--){
		cin>>x>>y>>z;
		xsum+=x;
		ysum+=y;
		zsum+=z;
	}
	if(xsum==0 && ysum==0 && zsum==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
	return 0;
}