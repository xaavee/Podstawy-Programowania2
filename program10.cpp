#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
//wprowadzac z klawiatury tak dlugo liczby az ich suma przekroczy 100

main() {
	int suma = 0;
	int liczba;
	
	while(suma<=100)
	{
		cout<<"Wprowadz liczbe: "<<endl;
		cin>>liczba;
		suma += liczba;
		while(suma>100){
			cout<<"za duza liczba!"<<endl;
			suma -=liczba;
			cout<<"Wprowadz liczbe: "<<endl;
		cin>>liczba;
		suma += liczba;
		}
			while(suma<100){
			cout<<"za mala liczba!"<<endl;
			cout<<"Wprowadz liczbe: "<<endl;
		cin>>liczba;
		suma += liczba;
		}
		cout<<"Aktualny stan sumy: "<<suma<<endl;
		cout<<"Liczba jest rowna 100!"<<endl;
		break;
	}
	
}
