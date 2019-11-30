#include <iostream>
#include <vector>
using namespace std;
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
	int count=1;
	for(int i=2;i<n+1;++i)
	{
		if(prostye[i])
		{
			count*=i;
		}
	}
	cout<<count;
	return 0;
}
