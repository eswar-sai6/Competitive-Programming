#include <bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 

long long t;
cin>>t;
while(t--){
	long long n,c=0;
	cin>>n;
	long long sum=0;
	while(n>0){
		if(n%2==1){
			c=c+1;
		}
		n=n/2;
	}
	for(long long i=0;i<c;i++){
		sum=sum+pow(2,i);
	}
	cout<<sum<<"\n";
}




}
