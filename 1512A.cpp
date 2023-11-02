// Problem: A. Spy Detected!
// Contest: Codeforces - Codeforces Round 713 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1512/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int k=0;
	while(t!=0){
		int n;
		int arr[100];
		int temp=n-1;
		cin>>n;
		for(int i=0;i<n; i++){
			cin>>arr[i];
		}
		for(int y=0; y<n; y++){
			int count=1;
			for(int x=0;x<n;x++){
				if(arr[x]==arr[y]){
					count++;
				}
			}
			if(count==2){
				cout<<y+1<<endl;
				break;
			}
		}
		
		t--;
	}
	return 0;
}