#include <bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 

long long a,b,c;
char s,q;
cin>>a>>s>>b>>q>>c;
if(s=='+'){
	if((a+b)==c){
		cout<<"Yes";
	}
	else{
		cout<<a+b;	
	}
}
if(s=='-'){
	if((a-b)==c){
		cout<<"Yes";
	}
	else{
		cout<<a-b;	
	}
}
if(s=='*'){
	if((a*b)==c){
		cout<<"Yes";
	}
	else{
		cout<<a*b;	
	}
}






}