#include <bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.out", "w", stdout);
#endif 

long long n;
cin>>n;



for(long long row=0;row<n;row++){
	for(long long col=0;col<n-row-1;col++){
		cout<<" ";
	}

	for(long long col=0;col<2*row+1;col++){
		cout<<"*";
	}
	cout<<"\n";
}

for(long long row=0;row<n;row++){
	for(long long col=0;col<row;col=col+1){
		cout<<" ";
	}
	for(long long col=0;col<2*n-2*row-1;col++){
		cout<<"*";
	}
	cout<<endl;
}

}