#include<iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long k=n-1;
	long long arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[k-i]<<" ";
	}
	
}