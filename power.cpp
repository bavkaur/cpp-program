#include<iostream>
using namespace std;
int power (int n,int x)
{
	if(x==0)
	{
	return 1;
}
int smalloutput=power(n,x-1);
int Output= n*smalloutput;
return Output;
}


int main()
{
int n,x; 
cin >>n;
cin>>x;
cout<<power(n,x)<<endl;
}
