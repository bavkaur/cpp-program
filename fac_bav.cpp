#include<iostream>
using namespace std;

int Factorial(int n){
// fatorial is of n integer type
	cout<<n<<endl;
	//giving the condition where it to stop
	if (n==0)
	{
	return 1;
	}
	int smalloutput=Factorial(n-1);
	int bigoutput=n*smalloutput;
}

int main()
{
	int n; // data type of n is an integer 
	cin >> n; // took input by cin
	cout<<" FACTORIAL -BAVLEEN" <<endl;
	
	int output=Factorial(n) ;
	cout<<output<<endl;
	// calling function factorial ad passing n as an argument in output
	
}
