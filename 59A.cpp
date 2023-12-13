// Problem: A. Word
// Contest: Codeforces - Codeforces Beta Round 55 (Div. 2)
// URL: https://codeforces.com/problemset/problem/59/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int uc=0, lc=0;
	for(int i=0; i<s.length(); i++){
		int k=s[i];
		if(k>=65 && k<=90){
			uc++;
		}
		else{
			lc++;
		}
	}
	if(uc>lc){
		for(int i=0; i<s.length(); i++){
			int k=s[i];
			if(k>=97 && k<=122){
				k=k-'a';
				s[i]=k+'A';
			}
		}
	}
	else{
		for(int i=0; i<s.length(); i++){
			int k=s[i];
			if(k>=65 && k<=90){
				k=k-'A';
				s[i]=k+'a';
			}
		}
	}
	
	cout<<s<<endl;
	return 0;
}