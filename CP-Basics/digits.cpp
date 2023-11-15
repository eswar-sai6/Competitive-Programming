#include <bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 
long long T;
cin>>T;
while(T--){
	string x;
	cin>>x;
	for(long long i=x.size()-1;i>=0;i--){
		cout<<x[i]<<" ";
	}
	cout<<"\n";
}





}