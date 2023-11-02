// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int arr[100];
	int count=0;
	int i=0;
	while(i<s.length()){
		if(s[i]=='+'){
			
		}
		else{
			arr[count++]=int(s[i]-'0');
		}
		i++;
	}
	sort(arr, arr+count);
	for(int i=0; i<count; i++){
		if(i==count-1){
			cout<<arr[i];
		}
		else{
			cout<<arr[i]<<"+";
		}
	}
	return 0;
}