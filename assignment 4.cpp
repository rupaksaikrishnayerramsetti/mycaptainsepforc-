#include<iostream>
using namespace std;
main()
{
	int *p,n;
	cout<<"enter no of elements:";
	cin>>n;
	int a[n];
	cout<<"enter array elements are:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	p=a;
	cout<<"the array elements are:";
	for(int i=0;i<n;i++){
		cout<<*p<<endl;
		p++;
	}
}
