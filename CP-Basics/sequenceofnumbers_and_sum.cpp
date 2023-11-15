#include <bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 

while(true){
	long long n;
    long long m;
	cin>>n>>m;
	if(n<=0 || m<=0){
		break;
	}
	long long sum=0;
	long long x=min(n,m);
	long long t=max(n,m);
	for(long long i=x;i<=t;i++){
		cout<<i<<" ";
		sum=sum+i;
    }
	cout<<"sum ="<<sum<<endl;






}
}