#include <iostream>
#include <cmath>

using namespace std;

main() {
	double liczba;
	cout<<"podaj liczbe = ";
	cin>>liczba; 
	double pierwiastek = sqrt(liczba); //sqrt - pierwiastek kwadratowy
	cout<<"pierwiastek kwadratowy = \""<<pierwiastek<<"\""<<endl;
	int potega;
	cout<<"potega = ";
	cin>>potega;
	double wynik = pow(liczba, potega); //pow - potêgowanie
	cout<<"Liczba: "<<"\""<<liczba<<"\""<<" do potegi "<<potega<<" = "<<wynik<<endl;
	cout<<"podaj liczbe = ";
	cin>>liczba;
	cout<<"Wartosc bezwzgledna = "<<abs(liczba); //abs - wartosc bezwzglêdna
}
