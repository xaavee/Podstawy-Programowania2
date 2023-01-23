#include <iostream>

using namespace std;


main() {
	/*
	int n = 5;
	
	if(n>0) cout<<"wieksza od 0"<<endl;
		else cout<<"mniejsza lub rowna 0"<<endl;
		
	if(n>0) cout<<"wieksza od 0"<<endl;
		else if (n==0) cout<<"rowna 0"<<endl;	
			else cout<<"mniejsza niz 0"<<endl;
	*/
	int dzien; //numer dnia tygodnia
	cout<<"Podaj nr dnia = ";
	cin>>dzien;
	switch(dzien) 
	{
		case 1:cout<<"poniedzialek";break;
		case 2:cout<<"wtorek";break;
		case 3:cout<<"sroda";break;
		case 4:cout<<"czwartek";break;
		case 5:cout<<"piatek";break;
		case 6:cout<<"sobota";break;
		case 7:cout<<"niedziela";break;
		default : cout<<"niepoprawny numer dnia";
	}
}
