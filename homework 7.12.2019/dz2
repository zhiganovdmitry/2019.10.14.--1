#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
bool nalichie(int x,int n,int *mas) //вводим функцию для проверки наличия элемента в массиве с помощью бинарного поиска (в данном случае бин. поиск - оптимальный вариант для того, чтобы это определить)
{
	int b=0;
	int c=n;
	while(c-b!=1)
	{
		if(x==mas[(c+b)/2])
		{
			return true;
		}
		else {
				if(x>mas[(c+b)/2])
				{
					b=(c+b)/2;
				} else
				{
					c=(c+b)/2;
				}
			}
	}
	return false;
}
int main() {
	int n,x,y;
	cin>>n;
	int mas[n];
	for(int i=0;i<n;++i) //заполняем массив в порядке неубывания для бинарного поиска (эфеективно, потому что сортируем сразу при получении значений, а не после )
	{
		int a=i;
		cin>>mas[a];
		while((mas[a-1]>mas[a])&&(a!=0))
		{
			int x=mas[a];
			mas[a]=mas[a-1];
			mas[a-1]=x;
			--a;
		}
	}
	cin>>x>>y;
	if(nalichie(x,n,mas)&&nalichie(y,n,mas))//если оба в наличии, то верно
	{
		cout<<"Yes";
	} else
	{
		cout<<"No";
	}
	return 0;
}
