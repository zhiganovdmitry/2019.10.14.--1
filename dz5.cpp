#include <iostream>
#include <math.h>
using namespace std;
int simple(int a)
{
	int count=0; 
	if(a<2)
	{
		return 0;	
	}
	for(int i=2;i<a;++i)
	{
		if(a%i==0)
		{
			++count;
		}
	}
	if(count==0)
	{
		return 1;
	} else
	{
		return 0;
	}
}
int simple1(int a)
{
	int count=0; 
	if(a<2)
	{
		return 0;	
	}
	for(int i=1;i<sqrt(a)+1;++i)
	{
		if(a%i==0)
		{
			++count;
		}
	}
	if((count==1)||(count==2))
	{
		return 1;
	} else
	{
		return 0;
	}
}

int main() {
	int n;
	cin>>n;
	for(int i=2;i<n+1;++i)
	{
		if(simple(i)&&simple1(i+2))
		{
			cout<<i<<"\n";
		}
	}
	return 0;
}
