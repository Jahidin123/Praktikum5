#include <iostream>
using namespace std;
int main ()
{
	int a =0;
	int max =0;
	
	do{
		cout<<"masukan angka :";
		cin>>a;
		if (a>max)
		max=a;
	}
	while (a!=0);
	cout<<"nilai terbesat adalah ="<<max;
}
