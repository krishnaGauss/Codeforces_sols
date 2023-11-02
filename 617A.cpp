// Problem: A. Elephant
// Contest: Codeforces - Codeforces Round 340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/617/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin>>x;
	int k =5;
	int count=0;
	while(x!=0 & k!=0){
		if((x/k)>0){
			count=count+(x/k);
			x=x%k;
		}
		else{
			k=k-1;
		}
	}
	cout<<count<<endl;
	return 0;
}