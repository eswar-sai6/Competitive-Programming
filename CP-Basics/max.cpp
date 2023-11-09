#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long long max=INT_MIN;
	long long a;
	for(long long i=1;i<=n;i++){
		cin>>a;
		if(a>max){
			max=a;
		}
	}
	cout<<max;
}