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
	for(int i=2;i<sqrt(a)+1;++i)
	{
		if(a%i==0)
		{
			++count;
		}
	}
	if((count==0)||(a==2))
	{
		return 1;
	} else
	{
		return 0;
	}
}

int main() {
	int n;
	int count=1;
	cin>>n;
	for(int i=2;i<n+1;++i)
	{
		if(simple(i))
		{
			count*=i;
		}
	}
	cout<<count;
	return 0;
}
