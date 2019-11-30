#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
int simple(int a)
{
	int count=0; 
	for(int i=2;i<sqrt(a)+1;++i)
	{
		if(a%i==0)
		{
			++count;
		}
	}
	if(count==1)
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
vector<bool> prostye (n + 1, true);
prostye[0] = prostye[1] = false;
for (int i = 2; i * i <= n; ++i)
{
    if (prostye[i])
    {
        for (int j = i * i; j <= n; j += i)
	{
            prostye[j] = false;
	}
    }
}
	for(int i=2;i<n+1;++i)
	{
		if((prostye[i])&&(prostye[i+2]||(simple(i+2))))
		{
			cout<<i<<"\n";
		}
	}
	return 0;
}
