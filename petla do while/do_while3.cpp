#include <iostream>
using namespace std;
/*
petla do while
przy pomocy petli do while dodac 5 liczb podzielnych przez 7 wpr. z klawiatury
*/
int main() 
{
	int n, a, b, suma;
	do
	{
		//blok petli
		cout<<"Podaj liczbe: "<<endl;
		cin>>n;
		if( n%7 == 0 ){
		a++;
		suma += n;
	}else {
		cout<<"Nie poprawna liczba!"<<endl;
	}
		
		}while(a<=4 );
	cout<<"Suma: "<<suma<<endl;
}


