#include <iostream>
using namespace std;
int Fb(int n)
{
	if ((n==1)||(n==2))
	{
		return 1;
	}
	if(n%2==1)
	{
		n/=2;//сокращаем область поиска вдвое, следовательно, используем алгоритм "Разделяй и властвуй"
		return Fb(n)*Fb(n)+Fb(n+1)*Fb(n+1);//так как Fb(2n+1)=Fb(n)*Fb(n)+Fb(n+1)*Fb(n+1)
	} else
	{
		n/=2;
		return Fb(n+1)*Fb(n+1)-Fb(n-1)*Fb(n-1);//так как Fb(2n)=Fb(n+1)*Fb(n+1)-Fb(n-1)*Fb(n-1)
	}
}
int main() {
	int n;
	cin>>n;
	cout<<Fb(n);
	return 0;
}
