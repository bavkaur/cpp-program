#include<iostream>
using namespace std;
int print(int n)
{
	if(n == -1)
	return 0;
	
	int smalloutput=print(n-1);
	cout<< n<<" ";
}
int main()
{
	cout<< "PRINT NUMBERS - BAVLEEN"<<endl; 
	int n;
	cin>>  n;
	print (n);
	
}
