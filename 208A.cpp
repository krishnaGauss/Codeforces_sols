// Problem: A. Dubstep
// Contest: Codeforces - Codeforces Round 130 (Div. 2)
// URL: https://codeforces.com/problemset/problem/208/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	// int n = s.length();
	string k = "WUB";
	while(s.length()!=0 && s.find(k)<s.length()){
        int f = s.find(k);
        if(f==0){
            s.replace(f,3,"");
        }

        else if((f>0 || f<s.length()) && s[f-1]!=' '){
            s.replace(f,3," ");
        }
        else if((f>0 || f<s.length()) && s[f-1]==' '){
            s.replace(f,3,"");
        }
	}

    cout<<s<<endl;
	return 0;
}