#include <iostream>
using namespace std;
int dvoiki(int a, int r,int k)
{
	int count=0,n=a;//сохраняем переменную a
		while(a!=0)//пока число не кончится
		{
			if(a%3==2)
			{
				++count;
			}
			a/=3;
		}
		if(count<k)
		{
			cout<<n<<"\n";
		}
		return r+=count;//возврат общего количества
}
int main() {
	int n,a,k;
	int r=0;
	cin>>n>>k;
	for(int i=0;i<n;++i)
	{
		cin>>a;
		r+=dvoiki(a,r,k);
	}//числа, подходящие под условие, не сохраняются, а сразу выводятся в процессе выполнения цикла(экономия памяти)
	cout<<r;
	return 0;
}
