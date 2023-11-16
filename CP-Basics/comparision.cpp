#include <bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 

long long a,b;
char ch;
cin>>a>>ch>>b;
if(a>b){
	if(ch=='>'){
		cout<<"Right"<<"\n";
	}
	else{
		cout<<"Wrong"<<"\n";
	}
}
if(a<b){
	if(ch=='<'){
		cout<<"Right"<<"\n";
	}
	else{
		cout<<"Wrong"<<"\n";
	}
}
if(a==b){
	if(ch=='='){
		cout<<"Right"<<"\n";
	}
	else{
		cout<<"Wrong"<<"\n";
	}
}







}