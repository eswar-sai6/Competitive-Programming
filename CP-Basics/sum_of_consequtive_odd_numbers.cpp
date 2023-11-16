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
	long long n,m;
	cin>>n>>m;
	long long x=min(n,m);
	long long t=max(n,m);
	long long odd_sum=0;
	for(long long i=x+1;i<t;i++){
		if(i%2!=0){
			odd_sum=odd_sum+i;
		}
	}
	cout<<odd_sum<<"\n";
}


}