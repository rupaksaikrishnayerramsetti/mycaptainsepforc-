#include<iostream>
using namespace std;
void iseligibleforvote(int age);
int main()
{
	int age;
	cout<<"enter your age: ";
	cin>>age;
	iseligibleforvote(age);
	return 0;
}
void iseligibleforvote(int age){
	if(age>18){
		cout<<"you are eligible for voting. ";
	}else if(age==18){
		cout<<"you just got the eligibility to vote. ";
	}else{
		cout<<"you are not eligible to vote and you are still kid. ";
	}
}
