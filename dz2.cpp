#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,a,num;
	cin>>n;
	for(int i=1;i<10;++i) //первая цифра числа
	{
		for(int j=0;j<pow(10,n/2+n%2-1);++j) //все возможные варианты от первой цифры до середины числа
		{
			cout<<pow(10,n/2+n%2-1)*i+j; //вывести первую половину числа
			if(n%2)
			{
				a=(pow(10,n/2+n%2-1)*i+j)/10;
			} else
			{
				 a=pow(10,n/2+n%2-1)*i+j;
			}
			while (a != 0) //отразить первую часть числа (все, кроме числа посередине, если n четное)
			{
        		num = a % 10;
        		a /= 10;
	        	cout << num;
			}
			cout<<"\n";
		}
	}
	return 0;
}
