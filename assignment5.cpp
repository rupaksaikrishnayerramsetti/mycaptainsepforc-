#include<iostream>
using namespace std;
int a;
int b(int);
int c(int);
main()
{
	cout<<"enter the positive value: ";
	cin>>a;
	for(int i=2;i<=a/2;i++)
		if(b(i)+c(a-i)==a){
			cout<<b(i)<<" + "<<c(a-i)<<" = "<<a<<endl;
	}
}
int b(int j){
	int isprime=1;
	for(int i=2;i<j/2;i++){
		if(j%i==0){
			isprime=0;
			break;
		}
	}
	if(isprime==1)
		return j;
}
int c(int k){
	int isprime=1;
	for(int i=2;i<k/2;i++){
		if(k%i==0){
			isprime=0;
			break;
		}
	}
	if(isprime==1)
		return k;
}
