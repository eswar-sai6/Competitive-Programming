#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
long long even_count=0;
long long odd_count=0;
long long positive_count=0;
long long negitive_count=0;
long long a;
for(long long i=1;i<n;i++){
cin>>a;
if(a%2==0){
even_count++;
}
if(a%2!=0){
odd_count++;
}
if(a<0){
negitive_count++;
}
if(a>0){
positive_count++;
}
}
cout<<"Even: "<<even_count<<"\n";
cout<<"Odd: "<<odd_count<<"\n";
cout<<"Positive: "<<positive_count<<"\n";
cout<<"Negative: "<<negitive_count<<"\n";
}