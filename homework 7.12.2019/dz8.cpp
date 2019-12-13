#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int mas[n];
	for(int i=0;i<n;++i) //получение массива и упорядочивание по неубыванию
	{
		int a=i;
		cin>>mas[a];
		while((mas[a-1]>mas[a])&&(a!=0)) //к сожалению, в худшем случае программа работает за О(n^2) :(
		{
			int x=mas[a];
			mas[a]=mas[a-1];
			mas[a-1]=x;
			--a;
		}
	}
	cout<<mas[k-1];
	return 0;
}
