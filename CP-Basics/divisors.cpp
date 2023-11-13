#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 
long long n;
cin>>n;
for(long long i=1;i<=n;i++){
	if(n%i==0){
		cout<<i<<endl;
	}
}
}