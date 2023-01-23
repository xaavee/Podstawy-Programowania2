#include <iostream>

using namespace std;

int main()
{
	int t[5][5]={1,3,4,6,5,7,8,9,0,4,3,2,4,5,6,7,8,9,0,0,0,4,3,2};
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++) {
			cout<<t[i][j]<<" ";
			cout<<endl;
		}
//dla podanego numeru kolumny k obliczymy sume wartoœci w tej kolumnie
int k;
cout<<"k=";
cin>>k;
if(k>=0 && k<=4) {
	int suma = 0;
	for(int i=0;i<5;i++)
	{
		suma += t[i][k];
	}
}
else cout<<"niepoprawny numer kolumny";
	}
	
}
