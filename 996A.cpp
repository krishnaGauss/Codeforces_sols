// Problem: A. Hit the Lottery
// Contest: Codeforces - Codeforces Round 492 (Div. 2) [Thanks, uDebug!]
// URL: https://codeforces.com/problemset/problem/996/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=0;
	while(n!=0){
		if((n/100)>0){
			count+=(n/100);
			n=n%100;
		}
		else if((n/20)>0){
			count+=(n/20);
			n=n%20;
		}
		else if((n/10)>0){
			count+=(n/10);
			n=n%10;
		}
		else if((n/5)>0){
			count+=(n/5);
			n=n%5;
		}
		else{
			count+=(n/1);
			n=0;
		}
	}
	cout<<count<<endl;
	return 0;
}
