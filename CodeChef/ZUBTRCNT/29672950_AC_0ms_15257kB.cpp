#include<iostream>
using namespace std;

int main()
{
	int TC,t1,t2,l,k;
	cin>>TC;
	for(int i=1;i<=TC;i++){
		cin>>l>>k;
		if(l<k)
			cout<<"Case "<<i <<": "<<0<<endl;
			
		else{
			t1=l-k+1;
			t2=t1*(t1+1)/2;
			
			cout<<"Case "<<i<<": "<<t2<<endl;
		}
	}
			
}