#include <iostream>
using namespace std;

//operatory relacyjne - porównania: <, <=, >,>=, == równy, != róny

main() {
	int liczba;
	cout<<"--------------------------------";
	cout<<"\nPodaj liczbe :";
	cin>>liczba;
	if ( liczba%2 == 0 ) {
		cout<<"Liczba \""<<liczba<<"\" jest parzysta!";
	}else{
		cout<<"Liczba \""<<liczba<<"\" jest nieparzysta!";
	};
}
