#include <iostream>
using namespace std;
int main() {
	int x,y;
	for(int i=4;i*2021<78487894;i+=10)//поскольку 2020 оканчивается на 0, а конечная сумма на 4, то нужно умножить 2021 на число, которое оканчивается на 4
	{
		if((78487894-2021*i)%2020==0)
		{
			cout<<"x="<<(78487894-2021*i)/2020<<" ";
			cout<<"y="<<i<<"\n";
		}
	}
	return 0;
}
