#include<iostream>
using namespace std;
int main()
{	
	int n,i;
	int arr[n];
	int *p=arr;
	cout<<"Enter no of elements : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"You entered : ";
	for(i=0;i<n;i++)
	{
		cout<<*p<<endl;
		p++;
	}
}
