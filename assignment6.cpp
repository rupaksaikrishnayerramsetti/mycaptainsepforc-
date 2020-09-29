#include<iostream>
using namespace std;
class time{
	public:
		int h;
		int m;
		int s;
	settime(){
		cout<<"Enter time: ";
		cout<<"\nHours? ";
		cin>>h;
		cout<<"Minutes? ";
		cin>>m;
		cout<<"seconds? ";
		cin>>s;
	}
	calculatetosec(){
		if(h<10 && m<10 && s<10)
			cout<<"The time is: "<<"0"<<h<<":0"<<m<<":0"<<s;
		else if(h<10 && m<10 && s>10)
			cout<<"The time is: "<<"0"<<h<<":0"<<m<<":"<<s;
		else if(h<10 && m>10 && s<10)
			cout<<"The time is: "<<"0"<<h<<":"<<m<<":0"<<s;
		else if(h>10 && m<10 && s<10)
			cout<<"The time is: "<<h<<":0"<<m<<":0"<<s;
		else
			cout<<"The time is: "<<h<<":"<<m<<":"<<s;
		cout<<"\nTime in total seconds: "<<h*60*60+m*60+s;
	}
};
main()
{
	time t;
	t.settime();
	t.calculatetosec();
}
