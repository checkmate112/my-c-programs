#include <iostream>
using namespace std;
int multiply(int x,int res[],int size);
void factorial(int n)
{
	int res[1000];
	int size=1;
	res[0]=1;
	for(int i=2;i<=n;i++)
	{
		size=multiply(i,res,size);
	}
	for(int j=size-1;j>=0;j--)
	{
		cout<<res[j];
	}
	
}
int multiply(int x,int res[],int size)
{
	int carry=0;
	for(int i=0;i<size;i++)
	{
		int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		res[size]=carry%10;
		carry=carry/10;
		size++;
	}
	return size;
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		factorial(n);
	}
	return 0;
}