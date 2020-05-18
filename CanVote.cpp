#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your age : ";
	cin>>a;
	if(a<18)
	cout<<"You are a minor,so you can't vote.";
	else if(a>18)
	cout<<"You are an adult,you can vote.";
	else
	cout<<"You still can't vote.Grow up!!";
	return 0;
}
