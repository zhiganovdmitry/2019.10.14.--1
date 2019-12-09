#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	long long g=0,d=0;
	vector<long long> coord(n+1);
	vector<long long> gold(n+1);
	vector<long long> energy(n+1);
	cin>>n;
	for(int i=1;i<n+1;++i)
	{
		cin>>coord[i]>>gold[i]>>energy[i];
		d+=energy[i];
		g+=gold[i];
	}
	while((coord[n]+1>d)&&(n!=0))
	{
		d-=energy[n];
		g-=gold[n];
		--n;
	}
	cout<<g;
	return 0;
}
