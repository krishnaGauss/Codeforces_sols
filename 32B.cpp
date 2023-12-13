// Problem: B. Borze
// Contest: Codeforces - Codeforces Beta Round 32 (Div. 2, Codeforces format)
// URL: https://codeforces.com/problemset/problem/32/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string ans="";
	int k=0;
	for(int i=0; i<s.length(); i=i+0){
		if(s[i]=='-' && s[i+1]=='-'){
			ans+='2';
			i=i+2;
		}
		else if(s[i]=='-' && s[i+1]=='.'){
			ans+='1';
			i=i+2;
		}
		else{
			ans+='0';
			i=i+1;
		}
	}	
	cout<<ans<<endl;
	return 0;
}